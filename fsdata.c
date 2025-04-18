#include "fs.h"

const unsigned char data_index_html[] = {
  /* /index.html */
  0x2f, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x2e, 0x68,
  0x74, 0x6d, 0x6c, 0x00,
  0x68, 0x74, 0x6d, 0x6c, 0x3e, 0x0a,
  0x20, 0x20, 0x3c, 0x68, 0x65, 0x61, 0x64, 0x3e,
  0x3c, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x50,
  0x49, 0x43, 0x33, 0x32, 0x20, 0x57, 0x65, 0x62,
  0x20, 0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3c,
  0x2f, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x3c,
  0x2f, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x0a, 0x20,
  0x20, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x3c, 0x68, 0x31, 0x3e,
  0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x66, 0x72,
  0x6f, 0x6d, 0x20, 0x50, 0x49, 0x43, 0x33, 0x32,
  0x21, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x3c, 0x70, 0x3e, 0x54, 0x68,
  0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20,
  0x74, 0x65, 0x73, 0x74, 0x20, 0x70, 0x61, 0x67,
  0x65, 0x20, 0x73, 0x65, 0x72, 0x76, 0x65, 0x64,
  0x20, 0x62, 0x79, 0x20, 0x74, 0x68, 0x65, 0x20,
  0x50, 0x49, 0x43, 0x33, 0x32, 0x20, 0x75, 0x73,
  0x69, 0x6e, 0x67, 0x20, 0x6c, 0x77, 0x49, 0x50,
  0x2e, 0x3c, 0x2f, 0x70, 0x3e, 0x0a, 0x20, 0x20,
  0x3c, 0x2f, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x0a,
  0x3c, 0x2f, 0x68
};

const struct fsdata_file file_index_html[] = {{
  NULL,
  data_index_html,
  data_index_html + 12,
  sizeof(data_index_html) - 12
}};

#define FS_ROOT file_index_html
#define FS_NUMFILES 1