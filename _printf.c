#include "main.h"

/**
 * _printf- function that produces output according to format
 * @format: format string
 * @...: list of args
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, n = 0, j ,len;
	char c;
	char *s;

	va_list args;
	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
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
				len = strlen(s);
				for (j = 0; j < len; j++)
				{
					write(1, &s[j], 1);
					n = n + 1;
				}
				i++;
			}
			else if (format[i + 1] == '%')
			{
				write(1, &format[i + 1], 1);
				n++;
				i++;
			}
			else
				return (0);
		}
		else
			write(1, &format[i], 1);
		va_end(args);
		i++;
	}
	return (n);
}
