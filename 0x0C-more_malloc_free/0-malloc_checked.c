#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **malloc_checked - allocates memory
 *@b: input size
 *Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		return ("98");
	}

	return (malloc(b));
}
