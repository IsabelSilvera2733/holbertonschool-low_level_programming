#include "main.h"

/**
 * _isalpha - writes the int _isalpha to stdout
 *
 * @ch: char
 *
 * Return:  followed by a new line
 */

int _isalpha(int ch)
{
	if (ch >= 65 && ch <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (ch);
}
