#include "main.h"

/**
 * swap_int - check the code
 * @a: variable.
 * @b: variable.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int extra = *a;

	*a = *b;
	*b = extra;
}
