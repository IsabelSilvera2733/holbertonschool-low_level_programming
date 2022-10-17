#include "main.h"
#include <stdio.h>

/**
 * _strcpy - concatenates two strings
 * @dest: destination string
 * @src: Source string
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int t = 0, e;

	while (dest[t])
	{
		t++;
	}
	for (e = 0; src[e] != 0; e++)
	{
		dest[t] = src[e];
		t++;
	}
	dest[t] = '\0';
	return (dest);
}
