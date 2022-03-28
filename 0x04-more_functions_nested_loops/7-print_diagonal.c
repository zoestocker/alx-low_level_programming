#include "main.h"

/**
 * print_diagonal - Prints a diagonal line in the terminal
 * @n: Number of times \ will be printed
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
