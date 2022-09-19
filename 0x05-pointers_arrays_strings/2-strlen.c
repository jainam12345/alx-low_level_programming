#include <stdio.h>
#include "main.h"
/**
 *_strlen - finds the length of input string
 *@s: input string
 *Return: 1 if successful and 0 otherwise
*/
int _strlen(char *s)
{
	int num  = 0;

	while (*s++)
	{
		num += 1;
	}

	return (num);
}
