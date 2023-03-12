#include <stdio.h>

/**
 * main - check the code.
 * Return: Always 0
 */
int main(void)
{
	int i;
	long unsigned fibonacci[100] = {0, 1, 1, 2};

	for (i = 4; i <= 100; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (i = 2; i < 53; i++)
	{
		if (i == 52)
		{
			printf("%lu\n", fibonacci[i]);
			break;
		}
		printf("%lu, ", fibonacci[i]);
	}
	return (0);
}
