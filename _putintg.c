#include "main.h"
/**
 * _putintg- print intigers
 * @d: intiger
 * Return: n
 */

int _putintg(int d)

{
	int n = 0, co = 0,m=0 , z=0;
	char s[100];
	if (d == 0)
	return (1);
	while (d != 0)
	{
	co=d%10;
	d=d/10;
	s[n]='0'+co;
	n++;
	}
	m=n;
		20	        
			21	        while (m>0)
			22	        {
				23	                putchar(s[m-1]);
				24	                m--;
				25	                
					26	        }
		27	        return (n);
}
