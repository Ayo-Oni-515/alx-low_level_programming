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
	int j;

	start = 'a';

	for (i = 0; i != 10; i++)
	{
		printf("%d", i);
	}
	for (j = start; j != 'g'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
