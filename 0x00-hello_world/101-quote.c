#include <unistd.h>

/**
 * main - prints and that piece of art is useful to the stadndard error
 * Return: Always 1
 */


int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	return (1);
}
