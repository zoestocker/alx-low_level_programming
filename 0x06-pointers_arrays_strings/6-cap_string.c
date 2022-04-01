#include "main.h"

/**
 * cap_string - Capitalises the first letter of every word in a string
 * @s: The string being changed
 *
 * Return: s, the string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == '\n')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == '.')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == '\t')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == ' ')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
	}
	return (s);
}
