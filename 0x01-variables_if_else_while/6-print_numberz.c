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
	int start;

	start = '0';
	for (i = start; i != ':'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
