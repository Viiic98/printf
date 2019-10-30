# _Printf

### *_printf *- custom version of formatted output conversion printf

#### SYNOPSIS
__#include "holberton.h"__

__int _printf(const char __ _format_ __, ...);__

#### DESCRIPTION
_printf is a homebrewed function that very closely immitates the **printf** function from the ** < stdio.h> ** library. It produces output occording to *format* as described below. It writes the output to the *stdout*, the standard output stream.

##### Return Value
Upon successful return, the function will return the number of characters printed (excluding the null byte used to end output to strings). If an output error is encountered, a negative value is returned.

##### Format of the _Format_ String
The format string is a string of characters, it begins and ends with double quotations. Within the format string it may contain zero or more directives which are regular characters (not including **%**), which are copied one by one to the output. The format string may also contain zero or more conversion specifications (introduced with **%**), which tell the function to print a specific format of output according to the conversion specifiers that follow the **%**.

#### OPTIONS
The function takes options in the conversion specifications which can either be a length modifier or a character specifier. More information in the next section.

##### Conversion Specifications
The conversion specifications that follow **%** can be one or two. If two conversion specifications are used, the first one will correspond to the length of the desired output (only works with the _c, s, r, and R_ specifiers). For example if you want to print 77 characters independent of your argument you would use the **"%77"** conversion specifier before using the second specifier which will be the conversion character. In the following list you can see the available character modifiers as well as what they do.

##### Conversion Specifiers
The conversion specifiers is a character that specifies the type of conversion to be applied to the argument passed through it. Here is the list of the conversion specifiers used by the **_printf** function as well as a brief description of what each of them do.

###### c
- The _c_ specifier takes the int argument and converts it to an unsigned char and writes the char to the output.

###### s
- The _s_ specifier takes the const char * argument which is expected to be a pointer to a char string and writes all the characters in the string up to (but not including) the terminating null byte of the string.

###### %

- A '%' is written. No argument is converted. The complete conversion specification is '%%'.

###### d, i

- The *d, or i* specifiers take the int argument and converts it to signed decimal notation, then writes it to the output.

###### b

- The *b* specifier takes the unsigned int argument and converts it to binary notation, then writes the binary notation to the output.

###### S

- The *S* specifier takes a const char * and writes it very similarly to the way the _s_ specifier writes the string that is passed through it, except it takes the non printable ASCII characters and prints them like: \fI\\x\fR followed by the ASCII code value in uppercase hexadecimal-always 2 characters.

###### r

- The *r* specifier takes a const char * and writes it very similarly to the way the _s_ specifier writes the string that is passed through it, except it does it in reverse

###### R

The *r* specifier takes a const char * and writes it very similarly to the way the _s_ specifier writes the string that is passed through it, except it does it after coding it in ROT13.
#### BUGS
The function does not handle the *flag characters, field width, precision, or length modifiers*. It also does not process the following conversion specifiers: *u, o, x, X, p, +, space, #, 0, -.*
#### AUTHORS
Juan Buitrago (_@juanfe9118_) and Victor Arteaga (_@Xathovic_)
