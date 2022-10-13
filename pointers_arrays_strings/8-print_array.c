#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of intergers
 *
 * @a: Array of intergers
 * @n: Number of elements of the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int d = 0;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);
		if (d != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
