#include "main.h"

/**
 * print_square - prints a square in the terminal
 * @size: the size of the square to be printed
 */
void print_square(int size)
{
	int i = 0, j;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
		_putchar('\n');
		i++;
		}
	}
}
