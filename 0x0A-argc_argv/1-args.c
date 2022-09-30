#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - prints number of arguments passed
 *@argc: number of arguments passed
 *@argv: pointer to the argument strings
 *Return: 0 id success 1 otherwise
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);

	return (0);
}
