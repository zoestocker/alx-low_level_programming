#include <stdlib.h>
#include <stdio.h>
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
 * print_binary - prints the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 0; _pow(2, i) <= n; i++)
	{
		if (n == 0)
			i++;
	}
	for (i--; i >= 0; i--)
	{
		if (_pow(2, i) <= n)
		{
			_putchar('1');
			n -= _pow(2, i);
		}
		else
			_putchar('0');
	}
}
