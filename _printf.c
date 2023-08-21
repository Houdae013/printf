#include "main.h"

/**
 * _case- fsct that differencies cases
 * @format: h
 * @i: int
 * @args: arg
 * Return: 0
 */

int _case(const char *format, int i, va_list args)
{
	int j = 0, n = 0;
	char c;
	char *s;

	if (format[i + 1] == 'c')
	{
		c = va_arg(args, int);
		_putchar(c);
		n++;
	}
	else if (format[i + 1] == 's')
	{
		s = va_arg(args, char *);
		if  (s = NULL)
			s = 'null';
		while (s[j] != '\0')
		{
			_putchar(s[j]);
			n = n + 1;
			j++;
		}
	}
	else if (format[i + 1] == '%')
	{
		_putchar(format[(i + 1)]);
		n++;
	}
	else
	{
		_putchar('%');
		_putchar(format[(i + 1)]);
		n = n + 2;
	}
	return (n);
}

/**
 * _printf- function that produces output according to format
 * @format: format string
 * @...: list of args
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int n = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			n = n + _case(format, i, args);
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			n = n + 1;
		}
		i++;
	}
	va_end(args);
	return (n);
}
