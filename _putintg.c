#include "main.h"
/**
 * _putintg- print intigers
 * @d: intiger
 * Return: n
 */

int _putintg(int d)

{
	int n = 0, co = 0, m = 0, z = 0;
	char s[100];

	if (d == -2147483648)
		return(_putstr("-2147483648"));

	if (d == 0)
		return (1);
	while (d != 0)
	{
		if (d < 0)
		{
			z = d;
			d = -d;
		}
		co = d % 10;
		d = d / 10;
		s[n] = '0' + co;
		n++;
	}
	m = n;
	while (m > 0)
	{
		if (z < 0)
		{
			_putchar('-');
			z = 1;
		}
		_putchar(s[m - 1]);
		m--;
	}
	return (n + z);
	if (
}
