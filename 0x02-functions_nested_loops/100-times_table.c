#include "main.h"
#include <stdio.h>

/**
 * print_times_table - check the code
 * Return:
 */

void print_times_table(int n)
{
	int x, y, value, u, d;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			value = x * y;
			if (value > 9)
			{
				u = value % 10;
				d = value / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else if (value >= 100)
			{
				u = value % 100;
				d = value / 100;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(value + '0');
			}
		}
		_putchar('\n');
	}
}
