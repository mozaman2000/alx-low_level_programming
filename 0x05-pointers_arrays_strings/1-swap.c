#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps
 * the values of two integers.
 * 
 * @a: the pointer of int a.
 * @b: the pointer of int b.
 * 
 * Return: int num called n.
 */

void swap_int(int *a, int *b)
{
	int *a_alt = *a;
	int *b_alt = *b;

	*b = *a_alt;
	*a = *b_alt;

}
