#include "main.h"

/**
 * _putstr- prints a string
 * @s: string
 * Return: n
 */

int _putstr(char *s, int &n)
{
	if  (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
	{
		_putchar(s[j]);
		n = n + 1;
		j++;
	}
	return (0);
}
