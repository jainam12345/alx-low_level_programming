#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - displays diagonals
 *@n: input number
 *Return: nothing
*/
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
