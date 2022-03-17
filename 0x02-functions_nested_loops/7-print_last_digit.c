#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number whose last digit is being printed
 *
 * Return: n % 10 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = (-1) * n;
	_putchar('0' + (n % 10));
	return (n % 10);
}
