#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to be printed
 *
 * Return: str.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
