#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 * Print numbers without using the char type of variable
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
