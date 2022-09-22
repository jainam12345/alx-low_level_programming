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
	int i = 0;
	char *start = dest;

	while ((*dest = *src) != '\0' && i < n)
	{
		src++;
		dest++;
		i++;
	}

	return (start);
}
