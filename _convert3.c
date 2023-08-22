#include "main.h"

/**
 * _convertu- handle the conversion specifiers u
 * @u: unsigned decimal integer
 * Return: n
 */

int _convertu(unsigned int u)
{
	int i = 0, n = 0, len;
	char s[32], c;
	int d = u;

	if (d < 0)
		d = -d;
	else if (d == 0)
	{
		_putchar('0');
		n++;
		return (n);
	}
	while (d != 0)
	{
		s[i] = '0' + (d % 10);
		d = d / 10;
		i++;
	}
	s[i] = '\0';
	len = i;
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
		n++;
	}
	return (n);
}

/**
 * _converto- convert to octals
 * @o :int
 * Return: n
 */

int _converto(unsigned int o)
{
	int n = 0, i = 0;
	int oct[64];

	if (o == 0)
	{
		n++;
		_putchar('0');
	}
	while (o > 0)
	{
		oct[i] = '0' + (o % 8);
		o = o / 8;
		i++;
		n++;

	}
	while (i > 0)
	{
		_putchar(oct[i - 1]);
		i--;
	}
	return (n);
}

/**
 * _convertx- convert to hexadecimal in lowercase
 * @x: unsigned int
 * Return: n
 */

int _convertx(unsigned int x)
{
	int n = 0, i = 0;
	int hex[64];

	if (x == 0)
	{
		n++;
		_putchar('0');
	}
	while (x > 0)
	{
		if ((x % 16) <= 9)
			hex[i] = '0' + (x % 16);
		else
			hex[i] = 87 + (x % 16);
		x = x / 16;
		i++;

	}
	while (i > 0)
	{
		_putchar(hex[i - 1]);
		i--;
		n++;
	}
	return (n);
}

/**
 * _convertX- converti en hexadecimal upper case
 * @X: unsigned int
 * Return: n
 */

int _convertX(unsigned int X)
{
	int n = 0, i = 0;
	int hex[64];

	if (X == 0)
	{
		n++;
		_putchar('0');
	}
	while (X > 0)
	{
		if ((X % 16) <= 9)
			hex[i] = '0' + (X % 16);
		else
			hex[i] = 87 + (X % 16);
		X = X / 16;
		i++;
	}
	while (i > 0)
	{
		_putchar(hex[i - 1]);
		i--;
		n++;
	}
	return (n);
}
