#include "main.h"

/**
 * leet - Replaces a with 4, e with 3, o with 0
 * t with 7 and l with 1
 * @s: The string
 *
 * Return: s, the string
 */
char *leet(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
		i++;
	}
	return (s);
}
