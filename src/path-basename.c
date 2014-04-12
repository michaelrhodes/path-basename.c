
//
// path-basename.c
//
// Copyright (c) 2014 Michael Rhodes
// MIT licensed
//

#include <string.h>
#include <libgen.h>
#include "str-replace/str-replace.h"
#include "path-basename.h"

char *
path_basename (const char *path, const char *extension) {
  if (!path) return NULL;

  char *base = basename((char *) path);

  if (extension && strcmp(extension, "") != 0) {
    return str_replace(base, extension, "");
  }

  return base;
}
