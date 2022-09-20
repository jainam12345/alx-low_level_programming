#include <stdio.h>
#include "main.h"
/**
 *_atoi - converts chars to int
 *@s: input chars
 *Return: 0 if successful and 0 otherwise
*/
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-')
			{
				putchar('-');
			}
			printf("%d", s[i] - '0');
		}
	}

	return (0);
}
