
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "src/path-basename.h"

int
main (void) {
  char *basename = NULL;

  assert(path_basename(NULL, NULL) == NULL);

  basename = path_basename("/path/to/file.ext", NULL);
  assert(strcmp("file.ext", basename) == 0);
  free(basename);

  basename = path_basename("/path/to/file.ext", ".ext");
  assert(strcmp("file", basename) == 0);
  free(basename);

  return 0;
}
