#include <stdio.h>
#include "main.h"

/**
 * print_array - Check the code.
 * @a: variable.
 * @n: variable.
 * Return:
 */

void print_array(int *a, int n)
{
	int i;

	n -= 1;
	if (n < 0)
	{
		printf("\n");
	}
	else if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			if (i == n)
			{
				printf("%d\n", a[i]);
				break;
			}
			printf("%d, ", a[i]);
		}
	}
}
