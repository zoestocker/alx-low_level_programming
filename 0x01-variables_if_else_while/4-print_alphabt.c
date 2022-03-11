#include <stdio.h>

/**
 * main - print alphabet in lowercase except e and q
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch == 'e')
			ch = 'e';
		else if (ch == 'q')
			ch = 'q';
		else
		putchar(ch);
	putchar('\n');
	return (0);
}
