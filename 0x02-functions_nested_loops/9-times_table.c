#include "main.h"

/**
 * times_table - check the code
 * Return:
 */

void times_table(void)
{
	int i, j;
	int value, div;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			value = i * j;
			if (value > 0)
			{
				div = (value - (value % 10)) / 10;
				_putchar(',');
                        	_putchar(' ');
				_putchar(div + '0');
				_putchar((value % 10) + '0');
			}	
			else 
			{
				if (j != 9)
				{
					_putchar(',');
                        		_putchar(' ');
					_putchar(' ');
				}
				_putchar(value + '0');
			}
		}
	_putchar('\n');
	}
}
