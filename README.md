# 42-ft_printf
A naive implementation of <stdio.h> printf() function as part of the 42 curriculum.

### Compiling the ft_printf static library
To use this ft_printf function, download either download the zip or `git clone` the repository and run `make` in the root of the project directory. This will generate a static library that you can include in your program.

### Compiling with ft_printf static library
Once you've run `make` and made `libftprintf.a` you can use the function with your programs by adding `#include "ft_printf.h"` in your .h file or directly in your project files.

When compiling make sure to link the `libftprintf.a` library. An example:

`gcc -I includes -o my_program my_file.c my_other_file.c -L. -lftprintf`

Then just run your program!

### Useful resources
Here are some resources that I personally found very useful for this project!

http://www.cplusplus.com/reference/cstdio/printf/

https://wpollock.com/CPlus/PrintfRef.htm

http://en.cppreference.com/w/c/variadic

https://en.wikipedia.org/wiki/Double-precision_floating-point_format

https://en.wikipedia.org/wiki/UTF-8
