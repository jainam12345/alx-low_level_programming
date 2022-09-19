#include <stdio.h>
#include "main.h"
/**
 *_puts - prints out a str
 *@str: input string
 *Return: nothing
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
