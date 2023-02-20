#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char let;
	char e;
	char q;

	e = 'e';
	q = 'q';

	for (let = 'a'; let <= 'z'; let++)
		if (let != q && let != e)
		{
			putchar(let);
		}
	putchar('\n');
	return (0);
}
