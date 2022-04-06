#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: The main string to be scanned
 * @needle:The string to be searched for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *r;

	r = strstr(haystack, needle);
	return (r);
}
