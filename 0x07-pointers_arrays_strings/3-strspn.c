#include <stdio.h>
#include "main.h"
/**
 *_strspn - return length of first substring
 *@s: searching string
 *@accept: check string
 *Return: length of first substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i, j, k;

	for (k = 0; s[k] != ' ' && s[k] != ','; k++)
	{
		continue;
	}

	for (i = 0; i <= k; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
			}
		}
	}

	return (counter);
}
