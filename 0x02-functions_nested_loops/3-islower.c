#include "main.h"

/**
 * main - checks for lowercase character
 * Description: _islower checks for lowercase
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
