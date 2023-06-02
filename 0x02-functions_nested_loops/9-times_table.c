#include "main.h"
#include <stdio.h>

/**
 * times_table - check the code
 * Return:
 */

void times_table(void)
{
	int x, y, value, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
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
