#include "main.h"

/**
 * _isalpha - Checks if c is a letter
 * @c: the letter to be checked
 *
 * Return: 1 if c is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
