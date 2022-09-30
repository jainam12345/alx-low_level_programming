#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - prints program name only
 *@argc: number of arguments passed at command line
 *@argv: pointers to the argument strings
 *Return: 0 if success and  otherwise
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
