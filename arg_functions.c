#include "holberton.h"

/**
 * print_char - print single character
 * @ap: arg list
 * Return: number of printed char
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	if (c == '\0')
		return (write(1, &c, 1));

	_putchar(c);
	return (1);
}

/**
 * print_str - print a string
 * @ap: arg list
 * Return: number of printed char
 */
int print_str(va_list ap)
{
	char *arg = va_arg(ap, char *);
	int sum = 0;

	if (!arg)
	{
		sum += _puts("(null)", 0);
		return (sum);
	}
	return (_puts(arg, 0));
}
