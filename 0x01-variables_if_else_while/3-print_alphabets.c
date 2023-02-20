#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Print lowercase alphabets and then in uppercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char low;
	char upper;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
