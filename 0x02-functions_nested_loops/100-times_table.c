#nclude "main.h"
#include <stdio.h>

/**
 * print_times_table - check the code
 * @n: Argument.
 * Return:
 */

void print_times_table(int n)
{
	int i, j, value;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			value = i * j;
			if (j == n)
			{
				if (value <= 9)
                        	{
                                	printf("%3d\n", value);
                        	}
                        	else if (value > 9)
                        	{
                                	printf("%2d\n", value);
                        	}
                       		else if (value > 90)
                        	{
                                	printf("%1d\n", value);
                        	}
				continue;
			}
			if (value <= 9)
			{
				printf("%3d,", value);
			}
			else if (value > 9)
			{
				printf("%2d,  ", value);
			}
			else if (value > 90)
			{
				printf("%1d,   ", value);
			}
		}
	}
}
