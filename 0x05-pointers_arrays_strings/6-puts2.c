#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints every other character in a string
 * @str: The string being printed
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
