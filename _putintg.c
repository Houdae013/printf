#include "main.h"
/**
 * _putintg- print intigers
 * @in: intiger
 * return n
 */

int _putintg(int d)
{

	int n = 0, co = 0;
	if (d == NULL)
	{
		return 0;
	}	
	if (d == 0)
		return 1;
	while (d != 0)
	{ 
		d /= 10;
		n++ ;
	}
	return n;
}
