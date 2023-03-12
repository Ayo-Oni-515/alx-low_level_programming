#include <stdio.h>

/**
 * main - check the code.
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long fibonacci[100] = {0, 1, 1, 2};
	unsigned long sum;

	for (i = 4; i <= 100; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (i = 2; fibonacci[i] <= 4000000 ; i++)
	{
		sum += fibonacci[i];
	}
	printf("%lu\n", sum);
	return (0);
}
