#include "holberton.h"

/**
 * print_int - get int value
 * @ap: arg list
 *
 * Return: value number of printed chars
 */
int print_int(va_list ap)
{
	int argument = va_arg(ap, int);

	return (print_int_number(argument));
}

/**
 * print_int_number - prints an integer number
 * @n: int value
 *
 * Return: 0 on success
 */
int print_int_number(int n)
{
	int num = 0, count = 0;

	num = n;
	if (n < 0)
	{
		num *= -1;
		_putchar('-');
	}
	if (n < 9 && n > -9)
	{
		_putchar('0' + n);
		return (0);
	}
	else
	{
		count = print_int_number(num / 10) + 1;
		_putchar('0' + num % 10);
		return (count);
	}
	return (0);
}
