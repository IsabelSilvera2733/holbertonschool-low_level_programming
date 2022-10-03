#include "main.h"

 /**
 * int _islower(int c) - Entry point
 *
 *  main - check the code.
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
