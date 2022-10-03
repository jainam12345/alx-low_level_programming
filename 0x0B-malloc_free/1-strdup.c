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
	int i, j, len;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	len = 0;
	while (*(str + i) != '\0')
	{
		i++;
		len++;
	}
	len++;
	arr = malloc(sizeof(char) * len);
	if (arr == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < len)
	{
		*(arr + j) = *(str + j);
		j++;
	}

	return (arr);
}
