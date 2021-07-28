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
	if (num <= 9)
	{
		count += _putchar('0' + num);
		return (count);
	}
	if (num > 9)
	{
		count += print_int_number(num / 10) + 1;
		_putchar('0' + num % 10);
		return (count);
	}
	return (0);
}

/**
 * print_binary - prints binary form of a number
 * @ap: va list (arg list)
 *
 * Return: num of chars
 */

int print_binary(va_list ap)
{
	unsigned int num;
	int counter = 0;
	char *str;

	num = va_arg(ap, unsigned int);
	if (!num)
	{
		counter += _puts("0", 0);
		return (counter);
	}
	str = convert_base(num, 2, 0);
	if (!str)
		return (0);
	counter = _puts(str, 0);
	free(str);
	return (counter);
}

/**
 * print_str_unprintable - unprint some characters
 * @ap: arg list
 * Return: number of printed char
 */

int print_str_x(va_list ap)
{
	char *arg = va_arg(ap, char *);
	int count = 0;

	if (!arg)
	{
		count += _puts("(null)", 0);
		return (count);
	}

	return (_puts(arg, 1));
}

/**
 * print_rot13 - print string with rot13
 * @ap: arg list
 * Return: number of printed char
 */

int print_rot13(va_list ap)
{
	int sum = 0;
	char *str, *argument = va_arg(ap, char*);

	if (!argument)
	{
		sum += _puts("%R", 0);
		return (sum);
	}

	str = convert_rot13(argument);
	if (!str)
		return (0);
	sum = _puts(str, 0);
	free(str);
	return (sum);
}
