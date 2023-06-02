#include "main.h"

/**
 * print_rev - check the code
 * @s: varaible.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int length = _strlen(s);

	for (length -= 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}

/**
 * _strlen - check the code
 * @s: varaible.
 * Return: count.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
