#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times _ is to be printed
 */
void print_line(int n)
{
	if (n > '0')
	{
		_putchar(95);
		n++;
		_putchar('\n');
	}
	else
	_putchar('\n');
}
