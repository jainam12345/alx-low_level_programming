#include <stdio.h>
#include "main.h"
/**
 *puts_half - prints the second half of a string
 *@str: input string
 *Return: nothing
*/
void puts_half(char *str)
{
	int i, j;
	int str_pt;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	str_pt = i / 2;
	/*if (i % 2 == 0)*/
	/*{*/
	/*str_pt = i / 2;*/
	/*}*/
	/*else*/
	/*{*/
	/*str_pt = (i - 1) / 2;*/
	/*}*/
	for (j = str_pt; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
