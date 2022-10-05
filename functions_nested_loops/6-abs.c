#include "main.h"

/**
 * _abs - prints the sign
 *
 * @n: argument is a sign that resive
 *
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
