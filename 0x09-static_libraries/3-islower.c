#include "main.h"

/**
 * _islower - Checks if a letter is lowercase
 * @c: The letter to be checked
 *
 * Return: 1 if lowercase 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
