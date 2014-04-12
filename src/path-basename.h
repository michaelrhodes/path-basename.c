
//
// path-basename.h
//
// Copyright (c) 2014 Michael Rhodes
// MIT licensed
//


#ifndef PATH_BASENAME
#define PATH_BASENAME 1

/*
 * Returns the basename of the given `path`,
 * optionally removing its `extension`.
 */

char *
path_basename (const char *, const char *);

#endif
