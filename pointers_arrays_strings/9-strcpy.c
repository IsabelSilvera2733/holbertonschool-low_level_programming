#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest: destination value
 * @src: Source value
 *
 * Return: the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c++] = '\0';
	return (dest);
}
