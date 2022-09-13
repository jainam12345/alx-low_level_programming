#include <stdio.h>
#include "main.h"
/**
 *times_table - multiplcation table
 *Return: nothing
*/
void times_table(void)
{
	int row = 0;
	int column;
	int product;

	while (row <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			product = (row * column);

			if (column == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			column++;
		}
		row++;
		_putchar('\n');
	}
}
