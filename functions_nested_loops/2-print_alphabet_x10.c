#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	char tim;

	for (tim = 1 ; tim <= 10; tim++)
	{
		for (ch = 97 ; ch <= 122 ; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar(10);
}
