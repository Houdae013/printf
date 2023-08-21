#include "main.h"

/**
 * _binary- converts an int to binary
 * @b: unsigned int
 * Return: 0
 */

int _binary(unsigned int b)
{
	int n = 0, i = 0;
	int bi[64];

	if (b == 0)
	{
		n++;
		_putchar('0');
	}
	while (b > 0)
	{
		if (b % 2 == 0)
		{
			b = b / 2;
			bi[i] = 0;
			i++;
		}
		else
		{
			b = b / 2;
			bi[i] = 1;
			i++;
		}
		n++;

	}
	while (i > 0)
	{
		_putchar('0' + bi[i - 1]);
		i--;
	}
	return (n);
}
