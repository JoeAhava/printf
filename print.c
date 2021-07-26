#include "holberton.h"

/**
 *_printf - produces output according to a format
 *@format: format string containing characters and specifiers
 *Return: length of formatted output
 */
int _printf(const char *format, ...)
{
	const char *t;
	unsigned int i;
	char *s;
	int count = 0;

	va_list ap;
	va_start(ap, format);

	for (t = format; *t != '\0'; t++)
	{
		while (*t != '%')
		{
			_putchar(*t);
			t++;
			count++;
		}
		t++;
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

	va_end(ap);
	return (count);
}
