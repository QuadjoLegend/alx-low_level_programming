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
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('_');
	}
	return (i);
}

