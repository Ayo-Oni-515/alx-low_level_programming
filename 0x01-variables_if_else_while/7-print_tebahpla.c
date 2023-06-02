#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char start;

	start = 'z';
	for (i = start; i != 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
