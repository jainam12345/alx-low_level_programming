#include <stdio.h>
#include "main.h"
/**
 **_strncat - concatenatesn bytes of src string
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to concatenate
 *Return: pointer to destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';

	return (start);
}
