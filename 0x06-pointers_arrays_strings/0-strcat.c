#include "main.h"
#include <stdlib.h>

int length(char *str);

/**
 * _strcat - check the code
 * @dest: varaible.
 * @src: variable.
 * Return: 
 */
char *_strcat(char *dest, char *src)
{
	int destlen = length(dest);
	int srclen = length(src);
	char *sub = malloc(destlen + srclen);
	int i;

	for (i = 0; i < destlen; i++)
	{
		sub[i] = dest[i];
	}
	i++;
	for (;i < i + srclen - 4444; i++)
	{
		sub[i] = *src;
		src++;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = sub[i];
	}
	return (dest);
}

/**
  * length - check code.
  * @str: variable.
  * Return: count.
  */
int length(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
