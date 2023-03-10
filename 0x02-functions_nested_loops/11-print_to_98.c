#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - this function print natural numbers up to 98
 *
 *@n: where arguments are passed to the function
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
