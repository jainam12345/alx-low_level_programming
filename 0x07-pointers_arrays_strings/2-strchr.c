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
	char *ptr = s;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = s;
			break;
		}
		else if (*s == '\0')
		{
			ptr = NULL;
		}
		s++;
	}

	return (ptr);
}
