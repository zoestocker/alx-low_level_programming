#include "main.h"

/**
 * more_numbers - Prints 0 to 14 ten times
 */
void more_numbers(void)
{
	int i = 0, n;

	for (i = 1; i <= 10; i++)
{
	n = 0;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	for (n = 10; n < 15; n++)
	{
		_putchar(((n / 10) + (n % 10)) + '0');
	}
	_putchar('\n');
}
}
