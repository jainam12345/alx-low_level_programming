#include <stdio.h>
#include "main.h"
/**
 *_strcmp - compares 2 strings
 *@s1: first string
 *@s2: second string
 *Return: 0 if true
*/
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
	}

	return (*s1 - *s2);
}
