#include <stdio.h>
#include "main.h"
/**
 **_strncpy - copies one string to another
 *@dest: the destination string
 *@src: the source string
 *@n: input number
 *Return: return pointer to dest str
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
