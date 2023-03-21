#include "main.h"

/**
 * _abs - entry point
 * @c: Returns the sign of a number
 * Return: 1 , 0 or -1
 */

int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
