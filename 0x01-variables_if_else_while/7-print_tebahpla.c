#include <stdio.h>

/**
 * main - Entry point
 *
 * This code will print alphabets in the reverse order
 * putchar is the only allowed variable
 * Return: Always 0 which means successful
 */

int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
