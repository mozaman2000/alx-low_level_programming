#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter;
	int i = 1
	while(i !=10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		i++;
	}
	_putchar('\n');
}

