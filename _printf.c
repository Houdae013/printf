#include "main.h"

/**
 * _case- fsct that differencies cases
 * @format: h
 * @i: int
 * @args: arg
 * Return: n
 */

int _case(const char *format, int i, va_list args)
{
	int n = 0;
	int d;

	if (format[i + 1] == 'c')
	{
		_putchar(va_arg(args, int));
		n++;
	}
	else if (format[i + 1] == 's')
		n = n + _putstr(va_arg(args, char *));
	else if (format[i + 1] == '%')
	{
		_putchar(format[(i + 1)]);
		n++;
	}
	else if (format[(i + 1)] == 'd' || format[(i + 1)] == 'i')
	{
		d = va_arg(args, int);
		n = n + _putintg(d);
	}
	else if (format[i + 1] == 'b')
		n = n + _binary(va_arg(args, unsigned int));
	else if (format[i + 1] == 'u')
		n = n + _convertu(va_arg(args, unsigned int));
	else if (format[i + 1] == 'o')
		n = n + _converto(va_arg(args, unsigned int));
	else if (format[i + 1] == 'x')
		n = n + _convertx(va_arg(args, unsigned int));
	else if (format[i + 1] == 'X')
		n = n + _convertX(va_arg(args, unsigned int));
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
