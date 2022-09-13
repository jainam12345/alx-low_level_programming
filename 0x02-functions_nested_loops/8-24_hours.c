#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - prints hours and mins
 *Return: none
*/
void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int min = 0;

		while (min < 60)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar('\n');
			min++;
		}
		i++;
	}
}
