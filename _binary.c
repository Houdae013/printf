#include "main.h"

/**
 * _binary- converts an int to binary
 * @b: unsigned int
 * Return: 0
 */

int _binary(unsigned int b, *n)
{
	if (b == 0)
		_putchar('0');
	while (b > 0)
	{
		if (b % 2 == 0)
		{	
			b = b / 2;
			_putchar('0');
		}
		else
		{
			b = b / 2;
			_putchar('1');
		}
		(*n)++;
	}
	return (0);
}
