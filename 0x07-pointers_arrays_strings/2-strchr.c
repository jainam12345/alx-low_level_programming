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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	s = NULL;

	return (s);
}
