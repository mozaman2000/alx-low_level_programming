#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (point1);

	if (new_size == 0 && point1)
	{
		free(point1);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer1[i] = old_ptr[i];
	}

	free(ptr);
	return (pointer1);
}

