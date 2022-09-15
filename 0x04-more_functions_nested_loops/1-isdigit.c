#include <stdio.h>
#include "main.h"
/**
 *_isdigit - checks if input is a digit
 *@c: input to function
 *Return: 1 if a digit and 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
