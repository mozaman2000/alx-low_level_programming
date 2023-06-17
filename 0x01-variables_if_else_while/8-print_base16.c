#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums = 0;
	char chars;
	while (nums < 10)
	{	
		putchar(48 + nums);
		++nums;
	}
	for (chars = 'a'; chars <= 'f'; chars++)
	putchar(chars);
	putchar('\n');
	return (0);
}
