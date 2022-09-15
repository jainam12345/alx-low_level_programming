#include <stdlib.h>
#include "main.h"
/**
 *print_numbers - displays numbers 0-9
 *Return: nothing
*/
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar((i % 10) + '0');
		i++;
	}
	_putchar('\n');
}
