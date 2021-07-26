#include "holberton.h"

/**
 *_printf - produces output according to a format
 *@format: format string containing characters and specifiers
 *Return: length of formatted output
 */
int _printf(const char *format, ...)
{
	const char *t;
	char *s;
	int i, count = 0;

	va_list ap;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%'  && format[1] == ' ' && !format[2])
		return (-1);

	for (t = format; *t; t++)
	{
		if (*t == '%')
		{
			t++;
			if (*t == '%')
			{
				count += _putchar('%');
				continue;
			}
			switch (*t)
			{
			case 'c':
				i = va_arg(ap, int);
				_putchar(i);
				break;
			case 's':
				s = va_arg(ap, char *);
				_puts(s);
				break;
			}
		} else
			count += _putchar(*t);
	}
	va_end(ap);
	return (count);
}
