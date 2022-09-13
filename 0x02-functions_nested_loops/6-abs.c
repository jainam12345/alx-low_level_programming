#include <stdio.h>
#include "main.h"
/**
 *_abs - displays abs value of a number
 *@a: any integer value input
 *Return: absolute value
*/
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a * 1);
	}
}
