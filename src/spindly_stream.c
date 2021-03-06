/***************************************************************************
 *  Project      _           _ _
 *     ___ _ __ (_)_ __   __| | |_   _
 *    / __| '_ \| | '_ \ / _` | | | | |
 *    \__ \ |_) | | | | | (_| | | |_| |
 *    |___/ .__/|_|_| |_|\__,_|_|\__, |
 *        |_|                    |___/
 *
 * Copyright (C) 2012, Daniel Stenberg <daniel@haxx.se>
 *
 * This software is licensed as described in the file LICENSE, which you
 * should have received as part of this distribution. The terms are also
 * available at http://spindly.haxx.se/license.html
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/
/*
 * Home of the spindly_phys_*() functions.
 */
#include "spdy_setup.h"         /* MUST be the first header to include */

#include <stdlib.h>
#include "spindly.h"
#include "spindly_stream.h"
#include "spindly_phys.h"

/*
 * Creates a request for a new stream and muxes the request into the output
 * connection, creates a STREAM handle for the new stream and returns the
 * RESULT. The CUSTOMP pointer will be associated with the STREAM to allow the
 * application to identify it.
 *
 */

spindly_error_t spindly_stream_new(struct spindly_phys *phys,
                                   unsigned int prio,
                                   struct spindly_stream **stream,
                                   void *userp,
                                   struct spindly_stream_config *config)
{
  struct spindly_stream *s;
  int rc;

  if(!phys || prio> PRIO_MAX)
    return SPINDLYE_INVAL;

  s = CALLOC(phys, sizeof(struct spindly_stream));
  if(!s)
    return SPINDLYE_NOMEM;

  s->phys = phys;
  s->state = STREAM_NEW;
  s->userp = userp;
  s->config = config;

  /* create zlib contexts for incoming and outgoing data */
  rc = spdy_zlib_inflate_init(&s->zlib_in);
  if(rc)
    goto fail;

  rc = spdy_zlib_inflate_init(&s->zlib_out);
  if(rc)
    goto fail;

  /* init the SPDY protocol handle for this stream */
  rc = spdy_stream_init(&s->spdy, false, false, &s->zlib_in, &s->zlib_out);
  if(rc)
    goto fail;

  /* add this handle to the outq */
  s->out = SPDY_CTRL_SYN_STREAM;
  _spindly_list_add(&phys->outq, &s->outnode);

  /* append this stream to the list of streams held by the phys handle */
  _spindly_phys_add_stream(phys, s);

  *stream = s;

  return SPINDLYE_OK;

  fail:
  spdy_zlib_inflate_end(&s->zlib_in);
  spdy_zlib_inflate_end(&s->zlib_out);

  return rc;
}
