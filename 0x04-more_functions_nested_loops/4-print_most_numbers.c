#include <stdio.h>
#include "main.h"
/**
 *print_most_numbers - prints all numbers except 2 and 4
 *Return: nothing
*/
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar((i % 10) + '0');
		}
		i++;
	}
	_putchar('\n');
}
