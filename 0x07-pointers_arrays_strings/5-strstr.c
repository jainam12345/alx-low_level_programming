#include <stdio.h>
#include "main.h"
/**
 **_strstr - locates wher sub string is
 *@haystack: original string
 *@needle: substring to search
 *Return: pointer to location of substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle && *needle != '\0')
		{
			needle++;
			i++;
		}
		else if (*needle == '\0')
		{
			break;
		}
		else
		{
			i = i - i;
		}
		haystack++;
	}

	return (haystack - i);
}
