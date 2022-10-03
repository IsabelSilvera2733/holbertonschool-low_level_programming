#include "main.h"

/**
 * _islower - writes the int _islower to stdout
 *
 * @ch: char
 *
 * Return:  followed by a new line
 */

int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (ch);
}
