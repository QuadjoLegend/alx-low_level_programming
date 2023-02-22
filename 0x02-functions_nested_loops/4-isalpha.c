#include "main.h"

/**
 * _isalpha - check and print alphabetic chracter
 *
 * @c: Receives input for the function
 *
 * Description: check the availability of alphabet and use _putchar to print
 *
 * Return:  1 if c is a letter and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
