#include <stdio.h>

/**
 * main - Printing single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
