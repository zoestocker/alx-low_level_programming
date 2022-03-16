#include "main.h"

/**
 * main - prints every minute for twenty-four hours
 * Description: jack_bauer prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
		_putchar(h / 10 + 48);
		_putchar(h % 10 + 48);
		_putchar(':');
		_putchar(m / 10 + 48);
		_putchar(m % 10 + 48);
		_putchar('\n');
		}
	}
}
