#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the bit
 * @index: the index
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = *n;

	if (index > sizeof(8) * 8)
		return (-1);
	num &= ~(1 << index);
	*n = num;
	return (num);
}
