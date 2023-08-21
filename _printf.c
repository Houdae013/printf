#include "main.h"

/**
 * _printf- function that produces output according to format
 * @format: format string
 * @...: list of args
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, n = 0;
	char c;
	char *s;
	va_list args;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				n++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				s = va_arg(args, char*);
				write(1, s, strlen(s));
				n = n + strlen(s);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				write(1, &format[i + 1], 1);
				n++;
				i++;
			}
		}
		write(1, &format[i], 1);
		i++;
	}
	return (n);
}
