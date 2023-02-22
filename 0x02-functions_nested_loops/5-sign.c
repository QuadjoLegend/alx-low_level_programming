#include "main.h"

/**
 * print_sign - prints a sign of a number
 *
 * @n: takes in input for the function
 *
 * Return: 1 and print n greater than zero
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('_');
	}
	return (value);
}

