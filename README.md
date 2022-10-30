# C - printf :page_facing_up:

### Description :memo:
The printf() function sends a formatted string to the standard output (the display). This string can display formatted variables and special control characters, such as new lines (‘\n’), backspaces (‘\b’) and tabspaces (‘\t’); these are listed in Table 2.1.

If successfully compiled and executed, the function should return the number of characters printed (excluding the null byte used to end output to strings). And if it fails, then the function should return a (-1) upon error and "(null)" if the string argument takes in NULL. If the format specifier is unkown, then the output would print out the format specifier as a string.

<img src="(https://github.com/mnlazs/holbertonschool-printf/blob/master/Images/image1.png)">

### Prototype :wrench:
`int _printf(const char *format, ...)`

- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, the standard output stream.
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.
### File Usage
File Name | Description
--- | ---
[_printf.c](https://github.com/tassavarat/printf/blob/master/_printf.c) | The main _prinf.c file is used to handle the array containing all the format specifiers used. As well as where the function starts to execute.
[_get_print.c](https://github.com/tassavarat/printf/blob/master/get_print.c) | Contains main body of our code that uses loops and if statements in order to execute the functions connected to the format specifiers. As well as testing for any test cases.
[helper_functions.c](https://github.com/tassavarat/printf/blob/master/helper_functions.c) | Is where we placed all the helper functions used within our code. Because of Holberton School's limit of 5 helper functions per file, any other helper function files we will make in the future will only contain a max limit of 5 or less.
[holberton.h](https://github.com/tassavarat/printf/blob/master/holberton.h) | The header file we used to contain all our the prototypes used as well as containing our struct and the standard libraries used.
[man_3_printf](https://github.com/tassavarat/printf/blob/master/man_3_printf) | The man page we created for our _printf function.
[helper_functions2.c](https://github.com/tassavarat/printf/blob/master/helper_functions2.c) | Another file containing more helper functions. Specifically, the functions for our converter, reverse, and Rot13.
[helper_functions3.c](https://github.com/tassavarat/printf/blob/master/helper_functions3.c) | Another file contain more helper functions. The file contains the functions t handle the hexidecimals and binary specifiers.
### Format Specifiers
The _printf program will replicate the effects of the listed % format specifiers as when used with printf.
