#include <stdio.h>
#include<stdlib.h>
/**
*main - Entry point
*Return: Always 0
*/
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long: %d byte(s)", sizeof(long));
	printf("Size of a long long: %d byte(s)", sizeof(long long));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
