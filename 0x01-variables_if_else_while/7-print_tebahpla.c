#include <stdio.h>
/**
*main - prints alphabets in reverse order
*Return: always 0
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
