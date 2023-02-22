#include "main.h"

/**
 * _islower - check description
 *
 * @c: point where the argument is received
 *
 * Description: function checks for lowercase
 *
 * Return: 1 if lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
