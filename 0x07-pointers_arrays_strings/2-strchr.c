#include <stdio.h>
#include "main.h"
/**
 **_strchr - gets position of a character in a str
 *@s: string
 *@c: character to search
 *Return: return address of character
*/
char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = s;
			return (ptr);
		}
		s++;
	}

	return (ptr);
}
