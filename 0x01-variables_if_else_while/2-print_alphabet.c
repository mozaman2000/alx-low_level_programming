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
	char alpha[] = 'abcdefghijklmnopqrstuvwxyz';
/* your code goes there */
	for (int count = 0;count<80;count++)
	{
		if (message[count] == '\0')
		{
			putchar('\n');
			break;
		}
		else
			putchar(message[count]);
	}
return (0);
}
