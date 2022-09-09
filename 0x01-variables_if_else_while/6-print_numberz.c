#include <stdio.h>
/**
*main - display nums using putchar
*Return: always 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
