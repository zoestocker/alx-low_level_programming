#include "main.h"

/**
 * main - prints the nine times tables
 *
 * Return: 0
 */
void times_table(void) /*prints times tables*/
{
	char n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n * n);
}
