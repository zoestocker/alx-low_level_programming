#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index
 *
 * Return: 1 upon success, -1 upon failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = *n;

		if (index > sizeof(8) * 8)
			return (-1);
	num |= (1 << index);

	*n = num;
	return (1);
}
