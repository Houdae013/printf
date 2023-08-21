#include "main.h"

/**
 * _putstr- prints a string
 * @s: string
 * Return: n
 */

int _putstr(char *s, int *n)
{
	int j = 0;

	if  (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
	{
		_putchar(s[j]);
		(*n)++;
		j++;
	}
	return (0);
}
