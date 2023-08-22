#include "main.h"
/**
 * _putintg- print intigers
 * @in: intiger
 * return n
 */

int _putintg(int d)
{

	int n = 0, co = 0 ,z = 1, arr[];
/*	if (d == NULL)
	{
		return 0;
	}
*/	
	if (d == 0)
		return 1;
	while (d != 0)
	{
		co = d % 10;
		arr[n] = co;
		n++ ;
		z = 10;
		d= (d- co) / z;
	}
	if arr[] != NULL;
	{
	_putchar(arr[n-1]);

	}
	return n;
}
