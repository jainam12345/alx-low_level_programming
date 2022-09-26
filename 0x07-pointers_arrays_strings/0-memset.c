#include <stdio.h>
#include "main.h"
/**
 **_memset - fills n byes of a string
 *@s: target mem area
 *@n: number of bytes to replace
 *@b: char to replace with
 *Return: the address of s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (*s != '\0' && i < n)
	{
		*s = b;
		s++;
		i++;
	}

	return (s);
}
