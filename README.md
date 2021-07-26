# 0x11. C - printf

## Description
This team project is part of the first trimester curriculum of the ALX Programme
.
_printf replicates the functionality of printf() and prints output to the
standard output .

---

## Prototype
```int _printf(const char *format, ...);```

## Usage
* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 20.04 LTS using GCC with
the command ```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c```
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: ```_printf("format string", arguments...)``` where ```format
string``` can contain conversion specifiers and flags,
along with regular characters

## Examples

* ```_printf("Hello, Holberton\n")``` *prints "Hello, Holberton", followed by a
new line*
* ```_printf("%s", "Hello")``` *prints "Hello"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*

---

# Tasks

These are all the tasks of this project, the ones that are completed link to the
corresponding files.

### [0. I'm not going anywhere. You can print that wherever you want to. I'm
here and I'm a Spur for life](./print.c)
* Write a function that produces output according to format.
  - c : converts input into a character
  - s : converts input into a string
