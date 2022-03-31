#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if the strings are equal,
 * 15 if s2 is bigger than s1
 * -15 id s1 is bigger than s2
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	if (result == 0)
	{
		return (0);
	}
	if (result < 0)
	{
		return (-15);
	}
	if (result > 0)
	{
		return (15);
	}
	return (0);
}
