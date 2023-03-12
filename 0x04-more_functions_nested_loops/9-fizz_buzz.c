#include <stdio.h> 

/**
  * main - check the code
  * 
  * Return: 0.
  */

int main(void)
{
	char fizz[4] = "Fizz";
	char buzz[4] = "Buzz";
	char fizzbuzz[8] = "FizzBuzz";
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" %s ", fizz);
		}
		else if (i % 5 == 0)
		{
			printf(" %s ", buzz);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" %s ", fizzbuzz);
		}
		else
		{
			printf(" %d ", i);
		}
	}
	return (0);

}
