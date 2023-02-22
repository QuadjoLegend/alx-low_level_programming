#include "main.h"

/**
 * print_last_digit - This function will print the last digit
 * @i: integer input
 * Return: value of the last digit of the number
 *
 */

int print_last_digit(int i)
{
	int n;

	if (i < 0)
		n = -1 * (i % 10);
	else
		n = i % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
