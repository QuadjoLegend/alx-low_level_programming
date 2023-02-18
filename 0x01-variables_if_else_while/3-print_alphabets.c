#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
/* Print lowercase and uppercase alphabets*/
	char low;
	char upper;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
