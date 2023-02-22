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

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

