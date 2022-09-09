#include <stdlib.h>
#include <stdio.h>
/**
*main - displays lower case alphabets without q and e
*Return: always 0
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
