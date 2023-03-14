#include "main.h"

/**
 * print_number - check the code
 * @n: variable.
 * Return:
 */
void print_number(int n)
{
	int dividend, remainder;

	dividend = n / 10;
	remainder = n % 10;
	_putchar(dividend + '0');
	_putchar(remainder + '0');
	_putchar('\n');
}
