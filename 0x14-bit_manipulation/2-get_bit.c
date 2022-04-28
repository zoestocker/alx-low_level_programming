#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _pow - raises a number to a power
 * @a: base
 * @b: power
 *
 * Return: the result
 */
unsigned long int _pow(int a, int b)
{
	int res = 1;

	while (b > 0)
	{
		res *= a;
		b--;
	}
	return (res);
}
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index we want to get
 *
 * Return: the value at the index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	for (i = 0; _pow(2, i) <= n; i++)
	;
	if (n == 0)
		i++;
	do {
		i--;
		if (i == index)
		{
			if (_pow(2, i) <= n)
				return (1);
			else
				return (0);
		}
		if (_pow(2, i) <= n)
			n -= _pow(2, i);
	} while (i != 0);

	return (-1);
}
