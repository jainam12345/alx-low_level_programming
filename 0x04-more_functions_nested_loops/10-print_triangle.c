#include <stdio.h>
#include "main.h"
/**
 *print_triangle - prints triangles
 *@size: size of triangle
 *Return: nothing
*/
void print_triangle(int size)
{
	int i = size;
	int j;
	int k;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i > 0)
		{
			j = i - 1;
			k = size - j;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			while (k--)
			{
				_putchar('#');
			}
			_putchar('\n');
			i--;
		}
	}
}
