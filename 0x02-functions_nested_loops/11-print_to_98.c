#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @n: Argument
 * Return:
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				break;
			}
			printf("%d", i);
			printf(", ");
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				break;
			}
			printf("%d", i);
			printf(", ");
		}
	}
}
