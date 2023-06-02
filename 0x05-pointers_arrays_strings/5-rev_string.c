#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * rev_string - check the code.
 * @s: variable.
 * Return:
 */

void rev_string(char *s)
{
	int length = _strlen(s) - 1;
	char *sub = malloc(length + 1);
	int i = 0;

	for (; length >= 0; length--)
	{
		sub[i] = s[length];
		i++;
	}
	sub[i++] = '\0';
	_strcpy(s, sub);
	free(sub);
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

/**
 * _strcpy - check the code
 * @dest: variable.
 * @src: variable.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';
	return (dest);
}
