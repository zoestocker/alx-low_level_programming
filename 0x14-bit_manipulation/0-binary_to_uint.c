#include "main.h"
#include <stddef.h>

/**
 * _pow - raises a number to a power
 * @a: base
 * @b: power
 *
 * Return: the result
 */
int _pow(int a, int b)
{
	int res = 1;

	while (b > 0)
	{
		res *= a;
		b--;
	}
	return (res);
}
/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of s
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the number
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int dec = 0;
	int power = _strlen(b) - 1;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			dec += _pow(2, power);
		b++;
		power--;
	}
	return (dec);
}
