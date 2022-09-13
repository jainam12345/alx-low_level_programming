#include <stdio.h>
#include "main.h"
/**
 *times_table - displays tables from 0 to 9
 *Return: nothing
*/
void times_table(void)
{
	int i = 0;
	int prod = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			prod = i * j;
			if (j != 9)
			{
				if (prod > 9)
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((prod % 10) + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				if (prod > 9)
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else
				{
					_putchar((prod % 10) + '0');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
