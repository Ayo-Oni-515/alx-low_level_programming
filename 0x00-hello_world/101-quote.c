#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char i[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stdout, "%s\n", i);
	return (1);
}
