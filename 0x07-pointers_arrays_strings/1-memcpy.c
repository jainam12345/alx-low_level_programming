#include <stdio.h>
#include "main.h"
/**
 **_memcpy - copies n bytes from src to dest
 *@dest: destination str
 *@src: source string
 *@n: number of bytes to copy
 *Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (dest);
}
