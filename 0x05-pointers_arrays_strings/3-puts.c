#include "main.h"

/**
 * _puts - check the code
 * @str: variable.
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		if (*str == '\0')
		{
			break;
		}
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
