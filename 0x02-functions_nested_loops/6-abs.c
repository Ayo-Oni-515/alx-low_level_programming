#include "main.h"

/**
 * _abs - check the code
 * @a: Argument
 * Return: Always 0, -a or a.
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a > 0)
	{
		return (a);
	}
	return (0);
}

