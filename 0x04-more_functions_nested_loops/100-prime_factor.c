#include <stdio.h>
#include <math.h>

long largest_prime_factor(long n);

/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long result = largest_prime_factor(n);

	printf("%ld\n", result);
	return (0);
}

/**
 * largest_prime_factor - Entry point.
 * @n: variable.
 * Return: largest.
 */
long largest_prime_factor(long n)
{
	long i, largest;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		largest = n;
	}
	return (largest);
}
