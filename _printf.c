#include "holberton.h"

/**
 * get_func - select funciton for conversion
 * @c: char to use for selection
 * Return: pointer to function
 */
int (*get_func(const char c))(va_list)
{
	int i = 0;

	function_identifier f[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hexa_lower},
		{"X", print_hexa_upper},
		{"p", print_ptr},
		{"r", print_str_reverse}
	};

	while (i < 9)
	{
		if (c == f[i].c[0])
			return (f[i].f);

		i++;
	}
	return (NULL);
}

/**
 * _printf - function to perform like printf
 * @format: format string
 * Return: number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	int i = 0, sum = 0;
	int (*function)();

	va_list ap;

	va_start(ap, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				function = get_func(format[i + 1]);
			if (function == NULL)
			{
				_putchar(format[i]);
				sum++;
				i++;
			} else
			{
				sum += function(ap);
				i += 2;
				continue;
			}
		} else
		{
			_putchar(format[i]);
			sum++;
			i++;
		}
	}
	va_end(ap);
	return (sum);
}
