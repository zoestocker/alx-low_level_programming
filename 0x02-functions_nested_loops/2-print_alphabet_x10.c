#include "main.h"

/**
 * main - Prints the alphabet in lowercase x10
 * Description: print_alphabet_x10 prints the alphabet ten times
 * Return: Always 0 (Success)
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
