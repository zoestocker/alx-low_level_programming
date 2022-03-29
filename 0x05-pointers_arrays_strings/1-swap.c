#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of two integers
 * @a: The first integer
 * @b: The second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
