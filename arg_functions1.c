#include "holberton.h"

/**
 * print_ptr - print adress
 * @ap: arg void
 * Return: number of printed char
 */
int print_ptr(va_list ap)
{
	char *str;
	int sum = 0;
	unsigned long p = (unsigned long) va_arg(ap, void*);

	if (!p)
	{
		sum += _puts("(nil)", 0);
		return (sum);
	}

	str = convert_base_pointer(p);
	if (!str)
		return (0);
	sum += _puts("0x", 0);
	sum += _puts(str, 0);
	free(str);
	return (sum);
}

/**
 * print_str_reverse - reverse a string
 * @ap: arg list
 * Return: number printed char
 */
int print_str_reverse(va_list ap)
{
	char *arg = va_arg(ap, char *), *str;
	int size, left, limit, right, sum = 0;

	if (!arg)
	{
		sum += _puts("%r", 0);
		return (sum);
	}
	size = _strlen_recursion(arg);
	right = size - 1;
	limit = (size % 2 == 0) ? (size + 1) / 2 : (size / 2);
	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (0);
	if (size % 2 != 0)
		str[limit] = arg[limit];

	for (left = 0; left < limit; left++)
	{
		str[left] = arg[right];
		str[right] = arg[left];
		right--;
	}
	str[size] = '\0';

	sum = _puts(str, 0);
	free(str);

	return (sum);
}

/**
 * print_octal - print number octal base
 * @ap: arg list
 * Return: number of printed char
 */

int print_octal(va_list ap)
{
	char *str;
	int sum;

	str = convert_base(va_arg(ap, unsigned int), 8, 0);
	sum = _puts(str, 0);
	free(str);
	return (sum);
}

/**
 * print_hexa_lower - print hexa lower
 * @ap: arg list
 * Return: number of printed char
 */

int print_hexa_lower(va_list ap)
{
	char *str;
	int sum;

	str = convert_base(va_arg(ap, unsigned int), 16, 0);
	sum = _puts(str, 0);
	free(str);
	return (sum);
}

/**
 * print_hexa_upper - print hexa upper
 * @ap: arg list
 * Return: number of printed char
 */

int print_hexa_upper(va_list ap)
{
	char *str;
	int sum;

	str = convert_base(va_arg(ap, unsigned int), 16, 1);
	sum = _puts(str, 0);
	free(str);
	return (sum);
}
