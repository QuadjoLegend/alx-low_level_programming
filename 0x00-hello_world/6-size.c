#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(a));
	printf("Size of long int: %ld byte(s)\n", (long int) sizeof(b));
	printf("Size of a long long int: %lld byte(s)\n", (long long int) sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));

	return (0);
}
