#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of an integer
 * @n: the integer to be printed
 *
 * Return: Always n (Success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
