#include "main.h"

/**
 * _case- fsct that differencies cases
 * @format: h
 * @i: int
 * @args: arg
 * @n: pointer
 * Return: 0
 */

int _case(const char *format, int i, va_list args)
{
	int j, len = 0, n = 0;
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
		len = strlen(s);
		for (j = 0; j < len; j++)
		{
			_putchar(s[j]);
			n = n + 1;
		}
	}
	else if (format[i + 1] == '%')
	{
		_putchar(format[(i + 1)]);
		n++;
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

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
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
