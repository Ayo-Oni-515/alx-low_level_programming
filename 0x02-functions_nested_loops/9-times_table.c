#include "main.h"
#include <stdio.h>

/**
 * times_table - check the code
 * Return:
 */

void times_table(void)
{
	int i, j;
	int value;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			value = i * j;
			if (value > 9)
			{
				printf("%1d,", value);
				continue;
			}
			if (j == 9)
			{
				printf("%1d\n", value);
				continue;
			}
			printf("%2d,", value);
		}
	}
}
