#include <stdio.h>
#include "main.h"
/**
 *_isalpha - checks if character is an alphabey
 *@c: input character
 *Return: 1 if upper or lower case else 0
*/
int _isalpha(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
