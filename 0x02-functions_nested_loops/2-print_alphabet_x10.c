#include "main.h"
/**
 * print_alphabet_x10 - look at the code
 */

void print_alphabet_x10(void)
{
	int g, i;
	char start;

	start = 'a';
	for (g = 0; g < 10; g++)
	{
		for (i = start; i != '{'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
