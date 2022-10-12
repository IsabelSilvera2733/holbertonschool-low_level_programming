#include "main.h"
#include <stdio.h>

/**
  * rev_string - reverses the string
  * @s: The string to print
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i = 0;
	int d = 0;
	char aux;

	while (s[i] != '\0')
		i++;

	for ( ; d < (i / 2) ; d++)
	{
		aux = s[d];
		s[d] = s[i - 1 - d];
		s[i - 1 - d] = aux;
	}
}
