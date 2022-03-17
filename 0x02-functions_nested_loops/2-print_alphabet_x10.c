#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	int i = 0, ch;

	for (i = 1; i <= 10; i++)
{
	ch = 0;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
}
