#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i, n, temp;

	i = 0;
	n = strlen(s) - 1;

	while (i < n)
	{
		temp = s[i];
		s[i++] = s[n];
		s[n--] = temp;
	}
}
