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
			if (j == 9)
			{
				printf("%d\n", value);
				continue;
			}
			printf("%d,  ", value);
		}
	}
}
