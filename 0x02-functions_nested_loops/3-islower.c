#include "main.h"

/**
 * _islower - check the code
 * @c: Argument
 * Return: Always 0 or 1.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
