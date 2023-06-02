#include "main.h"

/**
 * print_last_digit - check the code
 * @a: Argument
 * Return: Last digit of argument.
 */

int print_last_digit(int a)
{
	int answer;

	answer = a % 10;
	if (answer < 0)
	{
		answer = -answer;
	}
	_putchar(answer + '0');
	return (answer);
}
