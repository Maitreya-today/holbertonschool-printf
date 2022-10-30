# C - printf :page_facing_up:

### Description
The printf() function sends a formatted string to the standard output (the display). This string can display formatted variables and special control characters, such as new lines (‘\n’), backspaces (‘\b’) and tabspaces (‘\t’); these are listed in Table 2.1.

If successfully compiled and executed, the function should return the number of characters printed (excluding the null byte used to end output to strings). And if it fails, then the function should return a (-1) upon error and "(null)" if the string argument takes in NULL. If the format specifier is unkown, then the output would print out the format specifier as a string.

<img src="(https://github.com/mnlazs/holbertonschool-printf/blob/master/Images/image1.png)">

### Prototype :wrench:
`int _printf(const char *format, ...)`

- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, the standard output stream.
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.
