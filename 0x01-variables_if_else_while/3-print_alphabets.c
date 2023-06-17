#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

/* your code goes there */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	for (alpha = 'A'; alpha<='Z'; alpha++)
	putchar(alpha);
	putchar('\n');
return (0);
}
