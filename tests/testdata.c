char *test_control_syn_stream_frame = "\x80\x02\x00\x01\x01\x00\x01\x20\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x38\xea\xdf\xa2\x51\xb2\x62\xe0\x66\x60\x83\xa4\x17\x86\x28\x34\xdb\x75\x30\xac\xd7\x06\x89\xc2\xfd\x61\x5d\x68\x6b\xa0\x67\xa9\x83\x70\x13\x58\xc0\x42\x07\xee\x3f\x1d\x2d\x7d\x2d\xb0\x98\x29\x03\x1f\x6a\x66\x66\x90\xf3\x0c\xf6\x87\x3a\x55\x07\xec\x56\xb0\x3a\x73\x1d\x88\x7a\x63\x06\x7e\xb4\xec\xce\x20\x08\xf2\x8c\x0e\xd4\x37\x3a\xc5\x29\xc9\x19\x70\x35\xb0\x14\xc2\xc0\x97\x9a\xa7\x1b\x1a\xac\x93\x0a\x75\x08\x03\x2f\x4a\x3a\x64\xe0\x84\x86\x96\xad\x01\x03\x0b\xa8\x60\x60\xe0\x03\xa5\x9e\x1c\x10\xd3\xca\xd8\xc2\xc0\x80\x81\x2d\x17\x58\x20\xe5\xa7\x30\x30\xbb\xbb\x86\x30\xb0\x15\x03\xf5\xe6\xa6\x02\x95\x96\x94\x14\x30\x30\x83\xc2\x8a\x51\x9f\x81\x0b\x91\xc1\x19\x80\xc9\xa5\x2a\x33\x07\xa0\x9c\x44\x7d\x53\x3d\x03\x05\x8d\x08\x43\x43\x6b\x05\x9f\xcc\xbc\xd2\x0a\x85\x4c\x33\x0b\x33\x4d\x05\x47\x60\xe8\xa5\x86\xa7\x26\x79\x67\x96\xe8\x9b\x1a\x9b\xe8\x19\x99\x28\x68\x78\x7b\x84\xf8\xfa\xe8\x28\xe4\x64\x66\xa7\x2a\xb8\xa7\x26\x67\xe7\x6b\x2a\x38\x67\x00\xcb\xa9\x54\x7d\x43\x43\x3d\x03\x3d\x33\x4b\x33\x3d\x43\x33\x85\xe0\xc4\xb4\xc4\xa2\x4c\xa8\x26\x06\x76\x68\x6c\x31\x70\xc0\x22\x11\x00\x00\x00\xff\xff";
char *test_control_syn_reply_frame = "\x80\x02\x00\x02\x00\x00\x00\x35\x00\x00\x00\x01\x00\x00\x78\xbb\xdf\xa2\x51\xb2\x62\x60\x66\xe0\x71\x86\x06\x52\x08\x30\x90\x18\xb8\x10\x76\x30\xb0\x41\x94\x33\xb0\x01\x93\xb1\x82\xbf\x37\x03\x3b\x54\x23\x03\x07\xcc\x3c\x00\x00\x00\x00\xff\xff";
char *test_control_rst_stream_frame = "\x80\x02\x00\x03\x00\x00\x00\x08\x00\x00\x00\x01\x00\x00\x00\x01";
char *test_data_frame_header = "\x00\x00\x00\x01\x01\x00\x00\x00";
char *test_data_frame = "\x00\x00\x00\x01\x01\x00\x00\x0F""123456789012345";
char *test_nv_block = "\x00\x0b\x00\x06\x61\x63\x63\x65\x70\x74\x00\x5a\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x78\x6d\x6c\x2c\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x78\x68\x74\x6d\x6c\x2b\x78\x6d\x6c\x2c\x74\x65\x78\x74\x2f\x68\x74\x6d\x6c\x3b\x71\x3d\x30\x2e\x39\x2c\x74\x65\x78\x74\x2f\x70\x6c\x61\x69\x6e\x3b\x71\x3d\x30\x2e\x38\x2c\x69\x6d\x61\x67\x65\x2f\x70\x6e\x67\x2c\x2a\x2f\x2a\x3b\x71\x3d\x30\x2e\x35\x00\x0e\x61\x63\x63\x65\x70\x74\x2d\x63\x68\x61\x72\x73\x65\x74\x00\x1e\x49\x53\x4f\x2d\x38\x38\x35\x39\x2d\x31\x2c\x75\x74\x66\x2d\x38\x3b\x71\x3d\x30\x2e\x37\x2c\x2a\x3b\x71\x3d\x30\x2e\x33\x00\x0f\x61\x63\x63\x65\x70\x74\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x00\x11\x67\x7a\x69\x70\x2c\x64\x65\x66\x6c\x61\x74\x65\x2c\x73\x64\x63\x68\x00\x0f\x61\x63\x63\x65\x70\x74\x2d\x6c\x61\x6e\x67\x75\x61\x67\x65\x00\x0e\x65\x6e\x2d\x55\x53\x2c\x65\x6e\x3b\x71\x3d\x30\x2e\x38\x00\x0d\x63\x61\x63\x68\x65\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x00\x09\x6d\x61\x78\x2d\x61\x67\x65\x3d\x30\x00\x04\x68\x6f\x73\x74\x00\x0e\x6c\x6f\x63\x61\x6c\x68\x6f\x73\x74\x3a\x33\x38\x30\x30\x00\x06\x6d\x65\x74\x68\x6f\x64\x00\x03\x47\x45\x54\x00\x06\x73\x63\x68\x65\x6d\x65\x00\x04\x68\x74\x74\x70\x00\x03\x75\x72\x6c\x00\x01\x2f\x00\x0a\x75\x73\x65\x72\x2d\x61\x67\x65\x6e\x74\x00\x65\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x58\x31\x31\x3b\x20\x4c\x69\x6e\x75\x78\x20\x69\x36\x38\x36\x29\x20\x41\x70\x70\x6c\x65\x57\x65\x62\x4b\x69\x74\x2f\x35\x33\x34\x2e\x32\x34\x20\x28\x4b\x48\x54\x4d\x4c\x2c\x20\x6c\x69\x6b\x65\x20\x47\x65\x63\x6b\x6f\x29\x20\x43\x68\x72\x6f\x6d\x65\x2f\x31\x31\x2e\x30\x2e\x36\x39\x36\x2e\x31\x36\x20\x53\x61\x66\x61\x72\x69\x2f\x35\x33\x34\x2e\x32\x34\x00\x07\x76\x65\x72\x73\x69\x6f\x6e\x00\x08\x48\x54\x54\x50\x2f\x31\x2e\x31";
