#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strlen - is a function
 * that returns the length of a string.
 * @s: the pointer of char s.
 * Return:  int of string length.
 *
 *
 */

int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);

}
