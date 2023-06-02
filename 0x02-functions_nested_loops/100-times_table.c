#include "main.h"

/**
 * print_times_table - check the code
 * @n: variable.
 * Return:
 */
void print_times_table(int n)
{
	int x, y, value;

	if (n > 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				value = x * y;
				if ((value >= 10 && value <= 99) || (value >= 100))
				{
					_putchar(44), _putchar(32);
					if ((value >= 10 && value <= 99))
					{
						_putchar(32), _putchar((value / 10) + '0'), _putchar((value % 10) + '0');
						continue;
					}
					_putchar((value / 100) + '0'), _putchar(((value - 100) / 10) + '0');
					_putchar(((value - 100) % 10) + '0');
					continue;
				}
				else
				{
					if (x == 0 && y == 0)
					{
						_putchar(value + '0');
						continue;
					}
					else if ((x == 0 && y > 0) || (value > 0 && value <= 9))
						_putchar(44), _putchar(32), _putchar(32), _putchar(32);
					_putchar(value + '0');
					continue;
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0)
		_putchar('0'), _putchar('\n');
}
