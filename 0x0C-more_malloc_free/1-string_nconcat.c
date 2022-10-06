#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes to concatenate
 *Return: pointer to concatenated string memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, k, counter = 0, j = 0, total_char;
	char *new;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = 0;
	while (*(s1 + k) != '\0')
	{
		counter++;
		k++;
	}
	total_char = counter + n + 1;
	new = malloc(total_char);
	if (new == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		new[i] = *s1;
		s1++;
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		new[i] = s2[j];
		i++;
		j++;
	}

	return (new);
}
