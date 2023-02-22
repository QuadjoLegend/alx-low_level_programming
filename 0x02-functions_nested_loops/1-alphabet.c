#include "main.h"

/**
 * print_alphabet - Check description
 *
 * Description: It pprints the alphabet in lowercase followed by newline
 *
 * Return: Nothing
 *
 * first add your prototype
 */

void print_alphabet(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
		_putchar(t);
	_putchar('\n');
}
