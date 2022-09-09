#include <stdio.h>
#include <stdlib.h>
/**
*main - displays nums from 0-9
*Return: always 0
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
