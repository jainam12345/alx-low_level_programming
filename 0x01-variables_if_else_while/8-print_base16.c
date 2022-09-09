#include <stdio.h>
#include <stdlib.h>
/**
*main - print hexa-dec numbers
*Return: always 0
*/
int main(void)
{
	int n = 0;

	while (n < 16)
	{
		printf("%x", n);
		n++;
	}
	putchar('\n');

	return (0);
}
