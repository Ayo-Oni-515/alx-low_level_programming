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
	char sTART;

	start = 'a';
	sTART = 'A';
		for (i = start; i != '{'; i++)
		{
			putchar(i);
		}
		for (i = sTART; i != '['; i++)
		{
			putchar(i);
		}

	putchar('\n');
	return (0);
}
