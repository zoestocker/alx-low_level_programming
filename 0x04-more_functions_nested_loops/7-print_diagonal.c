#include "main.h"

/**
 * print_diagonal - Prints a diagonal line in the terminal
 * @n: Number of times \ will be printed
 */
void print_diagonal(int n)
{
	int l;

	if (n > 0)
	{
		l = 0;
		while (l > 0)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
