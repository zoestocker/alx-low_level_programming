#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: The string the character is located in
 * @c: The character being located
 *
 * Return: a pointer to the first occurence of the character,
 * or NULL if te character is not found.
 */
char *_strchr(char *s, char c)
{
	char *r;

	r = strchr(s, c);
	return (r);
}
