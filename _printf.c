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

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				n++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				s = va_arg(args, char *);
				len = strlen(s);
				for (j = 0; j < len - 1; j++)
				{
					if (s[j] == '\n')
					{
						_putchar('\n');
						_putchar('\r');
						n++;
					}
					else
					{
						_putchar(s[j]);
						n = n + 1;
					}
				}
				i++;
			}
			else if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				n++;
				i++;
			}
			else
				return (-1);
		}
		else
		{
			_putchar(format[i + 1]);
			n++;
		}	
		va_end(args);
		i++;
	}
	return (n);
}
