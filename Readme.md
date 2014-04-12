# path-basename.c
Find the last portion of a path. Similar to Node’s path.basename method.

[![Build status](https://travis-ci.org/michaelrhodes/path-basename.c.png?branch=master)](https://travis-ci.org/michaelrhodes/path-basename.c)

## Installation

Install with [clib(1)](https://github.com/clibs/clib):

```sh
$ clib install michaelrhodes/path-basename.c
```

## API

```c
char *path_basename(const char *path, const char *extension)
```
Returns the basename of the given `path`, optionally removing its `extension`.

## License

(The MIT License)

Copyright (c) 2014 Michael Rhodes &lt;spam@michaelrhod.es&gt;

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
