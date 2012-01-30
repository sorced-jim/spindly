#ifndef SPDY_LOG_H_
#define SPDY_LOG_H_

#include <stdio.h>


#ifndef NDEBUG
/**
 * fprintf logging macro for libspdy.
 */
#define SPDYDEBUG(msg) \
	fprintf(stderr, "%s:%d: ", __FILE__, __LINE__); \
	fprintf(stderr, msg); \
	fprintf(stderr, "\n");
#else
#define SPDYDEBUG(msg) do { } while(0)
#endif

#endif
