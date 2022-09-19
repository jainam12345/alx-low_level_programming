#include <stdio.h>
#include "main.h"
/**
 *swap_int - function that swaps values
 *@a: first value
 *@b: second value
 *Return: nothing
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
