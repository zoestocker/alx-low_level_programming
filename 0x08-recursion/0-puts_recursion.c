#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a newline
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s = s + 1;
	}
	_putchar('\n');
}
