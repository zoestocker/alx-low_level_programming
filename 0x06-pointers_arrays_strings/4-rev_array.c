#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements in an array
 */
void reverse_array(int *a, int n)
{
	int temp, i;
	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	printf("%d", a[i]);
}
