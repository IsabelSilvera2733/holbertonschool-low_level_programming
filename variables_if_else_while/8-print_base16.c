#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
