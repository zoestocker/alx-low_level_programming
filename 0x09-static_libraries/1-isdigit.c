#include "main.h"

/**
 * _isdigit - Checks if the character is a letter
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
