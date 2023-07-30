#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptsr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptsr = malloc(sizeof(int) * size);

	if (ptsr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptsr[i] = min++;

	return (ptsr);
}

