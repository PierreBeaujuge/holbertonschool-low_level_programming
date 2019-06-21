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
	char N;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (N = 'a'; N <= 'f'; N++)
	{
		putchar(N);
	}
	putchar('\n');
	return (0);
}
