#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **create_array - creates an array of chars using malloc
 *@size: input size of array
 *@c: first character of array
 *Return: pointer if size is not 0 and Null otherwise
*/
char *create_array(unsigned int size, char c)
{
	char *arry = malloc(sizeof(int) * size);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			arry[i] = c;
			i++;
		}
		return (arry);
	}
}
