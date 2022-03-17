#include "main.h"

/**
 * main - Print times_table
 *
 * Return: 0
 */
void times_table(void)
{
	char n;
	char o;

	for (n = '0'; n <= '9'; n++)
	{
		for (o = '0'; o <= '9'; o++)
		{
		_putchar(n * o);
		_putchar(',');
		_putchar(' ');
		}
	}
}
