#include <stdio.h>
#include "main.h"
/**
 *factorial - calculates factorial of a number
 *@n: input number
 *Return: factorial
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
