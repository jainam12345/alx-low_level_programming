#include <stdio.h>
#include "main.h"
/**
 *more_numbers - prints numbers 0-14, ten times
 *Return: nothing
*/
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
