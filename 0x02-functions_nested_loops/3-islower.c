#include <stdio.h>
#include "main.h"
/**
 *_islower - tests if char is lowercase or not
 *@c: the letter to be checked
 *Return: 1 if true else 0
*/
int _islower(int c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
