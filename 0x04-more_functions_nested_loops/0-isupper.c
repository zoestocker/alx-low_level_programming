#include "main.h"

/**
 * _isupper - Checks if a letter is uppercase
 * @c: The letter to be checked
 *
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
