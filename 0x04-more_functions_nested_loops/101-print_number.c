#include "main.h"

/**
 * print_number - check the code
 * @n: variable.
 * Return:
 */
void print_number(int n)
{
	unsigned int value = n;

	if (n < 0)
	{
		n *= -1;
		value = n;
		_putchar('-');
	}
	value /= 10;
	if (value != 0)
	{
		print_number(value);
	}
	_putchar((unsigned int) n % 10 + '0');
}
