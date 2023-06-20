#include "main.h"

/**
 * _islower - checks if char is lower case or not
 * @c: is the char to be checke
 * Return 1 if lowercase, otherwise 0.
 */

int islower(int c)

{
	if(c >= 'a' && c <= 'z')
	{
		return(1);
	
		else
			return(0);
	}
