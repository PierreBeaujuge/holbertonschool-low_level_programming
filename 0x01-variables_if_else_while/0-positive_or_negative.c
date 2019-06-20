#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
for (n=0)
printf ("%d is zero/n");
break;
for (n>0)
printf ("%d is positive/n");
break;
for (n<0)
printf ("%d is negative/n");
break;
return (0);
}
