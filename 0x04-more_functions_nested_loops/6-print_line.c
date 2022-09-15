#include <stdio.h>
#include "main.h"
/**
 *print_line - prints out a line
 *@n: length of line
 *Return: nothing
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
