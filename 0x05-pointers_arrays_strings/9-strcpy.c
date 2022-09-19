#include <stdio.h>
#include "main.h"
/**
 **_strcpy - copies a string to another
 *@dest: destination variable
 *@src: source string
 *Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];

	return (dest);
}
