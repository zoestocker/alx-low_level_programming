#include "main.h"
#include <stdio.h>

/**
 * main - print the absolute value of an integer
 * Description: _abs prints the absolute value of n.
 * @n: the integer to be printed.
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
