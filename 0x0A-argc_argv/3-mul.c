#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints out the product
 *@argc: number of args
 *@argv: pointer to arg strings
 *Return: 0 if success and 1 if fail
*/
int main(int argc, char *argv[])
{
	int prod, i;


	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prod = 1;
		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
	}

	return (0);
}
