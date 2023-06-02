#include <stdio.h>

/**
 * main - check the code.
 * Return: Always 0
 */
int main(void)
{
	int i;
	long fibonacci[100] = {0, 1, 1, 2};
	long sum = 0;

	for (i = 4; i <= 100; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (i = 2; fibonacci[i] < 4000000 ; i++)
	{
		if (fibonacci[i] % 2 == 0)
		{
			sum += fibonacci[i];
		}
		else
		{
			continue;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
