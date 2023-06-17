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

	while (nums < 17)
	{
		putchar(48 + nums);
		++nums;
	}
	putchar('\n');
	return (0);
}
