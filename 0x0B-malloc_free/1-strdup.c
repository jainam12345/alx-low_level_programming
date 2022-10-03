#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **_strdup - duplicates a string
 *@str: input str
 *Return: pointer to duplicated string
*/
char *_strdup(char *str)
{
	int i, j;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		i++;
	}
	arr = malloc(sizeof(char) * i);
	j = 0;
	while (j < i)
	{
		arr[j] = str[j];
		j++;
	}

	return (arr);
}
