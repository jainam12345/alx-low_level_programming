#include <stdio.h>
#include "main.h"
/**
 **_strpbrk - Looks for a character and returns the rest of the string
 *@s: input string
 *@accept: search characters
 *Return: Return pointer to the remaining string
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
