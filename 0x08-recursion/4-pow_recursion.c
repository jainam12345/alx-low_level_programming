#include <stdio.h>
#include "main.h"
/**
 *_pow_recursion - calculates a number to the power another number
 *@x: base
 *@y: power
 *Return: the value of base to the power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
