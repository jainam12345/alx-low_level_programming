#include <stdio.h>
/**
*main - prints double digit nums with out repetition
*Return: always 0
*/
int main(void)
{
	int j;

	for (int i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
