#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int n, o, p;

	for (n = 0; n < 10; n++)
	{
		for (o = 0; o < 10; o++)
		{
			p = n * o;
			if (o == 0)
			{
				_putchar(p + '0');
			}
			if (p < 10 && o != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
