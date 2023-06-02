#include "main.h"

/**
 * puts2 - check the code
 * @str: varaible.
 * Return:
 */

void puts2(char *str)
{
	int length = _strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
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
