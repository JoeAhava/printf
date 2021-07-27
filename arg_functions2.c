#include "holberton.h"

/**
 * print_int - get int value
 * @ap: arg list
 *
 * Return: value number of printed chars
 */
int print_int(va_list ap)
{
	return (print_int_number(va_arg(ap, int)));
}

/**
 * print_int_number - prints an integer number
 * @n: int value
 *
 * Return: 0 on success
 */
int print_int_number(int n)
{
	unsigned int num;
	int count = 0;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		count++;
		num *= -1;
	}
	if (num < 9)
	{
		count += _putchar('0' + num);
		count++;
		return (count);
	}
	else
	{
		count += print_int_number(num / 10) + 1;
		_putchar('0' + num % 10);
		return (count);
	}
	return (0);
}
