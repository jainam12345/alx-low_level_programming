#include <stdio.h>
/**
*main - prints double digit nums with out repetition
*Return: always 0
*/
int main(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
