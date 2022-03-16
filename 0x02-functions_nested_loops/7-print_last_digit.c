#include "main.h"

/**
 * main - prints the last digit
 * print_last_digit prints the last digit in n
 * @n: the number whose last digit is being printed
 * Return: 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = (-1) * n;
	_putchar('0' + (n % 10));
	return (n % 10);
}
