#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_to_98 - displays numbers up to 98
 *@n: input starting number
 *Return: nothing
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d", n);
				putchar(',');
				putchar(' ');
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d", n);
				putchar(',');
				putchar(' ');
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
		putchar('\n');
	}
	else
	{
		printf("%d\n", n);
	}
}
