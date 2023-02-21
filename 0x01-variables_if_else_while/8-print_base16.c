#include <stdio.h>

/**
 * main - Entry point
 *
 * print numbers in base 16 only putchar
 *
 * Return: Always 0 means success
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
