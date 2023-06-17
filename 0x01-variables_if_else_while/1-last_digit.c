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
	int n_last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	n_last_digit = n %10;
	
	if (n_last_digit > 5)
	{
	printf("Last digit of %i is %i and is greater than 5\n", n, n_last_digit);
	}
	if (n_last_digit == 0)
	{
	printf("Last digit of %i is %i and is 0\n", n, n_last_digit);
	}
	if (n < 6 && n == 0)
	{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n_last_digit);
	}
return (0);
}
