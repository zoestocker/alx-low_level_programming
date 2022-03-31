#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints every 2nd character in a string
 * followed by a newline
 * @str: The string containing the characters being printed
 */
void puts2(char *str)
{
	int i, n;

	i = 0;
	n = 0;

	while (str[i++])
	{
		n++;
	}
	for (i = 0; i < n; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
