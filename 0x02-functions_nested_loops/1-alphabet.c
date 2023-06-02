#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i;
	char start;

	start = 'a';
	for (i = start; i != '{'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
