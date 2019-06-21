#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int m;
int p;
int k;

for (n = '0'; n <= '9'; n++)
{
for (m = '0'; m <= '9'; m++)
{
for (p = '0'; p <= '9'; p++)
{
for (k = '0'; k <= '9'; k++)
{
	if (n <= p && m < k)
	{
		putchar(n);
		putchar(m);
		putchar(' ');
		putchar(p);
		putchar(k);
		if (!(n == '9' && m == '8' && p == '9' && k == '9'))
		{
			putchar(',');
			putchar(' ');
		}
	}
}
}
}
}
putchar('\n');
return (0);
}
