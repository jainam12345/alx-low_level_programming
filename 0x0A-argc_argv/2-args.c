#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - prints all parameters receieved
 *@argc: number of parameters
 *@argv: pointers to characters strings
 *Return: 0 if success else 1
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
