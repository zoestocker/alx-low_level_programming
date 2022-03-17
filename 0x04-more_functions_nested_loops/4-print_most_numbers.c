#include "main.h"

/**
 * print_most_numbers - Prints all numbers except 2 and 4
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		if (i == '2')
			i = '2';
		else if (i == '4')
			i = '4';
		else
		_putchar(i);
	_putchar('\n');
}
