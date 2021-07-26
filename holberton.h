#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int _putchar(char c);
int _puts(char *str, int ascii);
int convert_alpha_numeric(int nb, int upper);
char *convert_base(unsigned long nb, unsigned int base, int upper);
int print_percent(va_list ap __attribute__((unused)));

/**
 *struct func_identifier - struct for identifying funciton
 *@c: string
 *@f: pointer to function
 */
typedef struct func_identifier
{
	char *c;
	int (*f)(va_list);
} function_identifier;

#endif
