#include <stdio.h>

/**
 * main - check the code.
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int fibonacci[99] = {1, 2};

	for (i = 2; i <= 91; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	for (i = 0; i <= 91; i++)
	{
		printf("%lu, ", fibonacci[i]);
	}

	return (0);
}
