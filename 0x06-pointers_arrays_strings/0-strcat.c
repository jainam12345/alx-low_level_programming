#include <stdio.h>
#include "main.h"
/**
 * _strcat - check the code for Holberton School students.
 *@dest : variable
 *@src : variable
 * Return: Concatinated string.
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}
