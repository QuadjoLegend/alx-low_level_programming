#include "main.h"

/**
 * print_alphabet_x10 - check description
 *
 * Description: print lowercase alphabets 10 times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char k;
	char t;

	for (k = 0; k < 10; k++)
	{
		for (t = 'a'; t <= 'z'; t++)
			_putchar(t);
		_putchar('\n');
	}
}
