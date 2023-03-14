#include "main.h"

/**
 * print_triangle - check the code
 * @size: varible
 * Return:
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size == 1)
	{
		_putchar(35);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				_putchar(32);
			}
			for (k = 0; k < i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
