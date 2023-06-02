#include "main.h"

/**
 * _isalpha - check the code
 * @c: Argument
 * Return: Always 0 or 1.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

