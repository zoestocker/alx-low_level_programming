#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of two integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
