#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * * main - Entry point
 * *
 * * Description: 'the program's description'
 * *
 * * Return: Always 0 (Success)
**/
int main(void)
{
	int n;
	int nld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	nld = n % 10;
	if (nld > 5)
	{
	printf("Last digit of %i is %i and is greater than 5\n", n, nld);
	}
	if (nld == 0)
	{
	printf("Last digit of %i is %i and is 0\n", n, nld);
	}
	if (n < 6 || n == 0)
	{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, nld);
	}
return (0);
}
