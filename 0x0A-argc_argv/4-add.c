#include <stdio.h>
#include <stdlib.h>
/**
 *main - return sum of numbers
 *@argc: number of arguments
 *@argv: pointers to arguments
 *Return: 0 if success and 1 if fail
*/
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				j++;
			}
			else
			{
				printf("Error");
				putchar('\n');
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
