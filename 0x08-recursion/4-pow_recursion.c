#include "main.h"

/**
 * _pow_recursion - returns the length of a string
 * @x: value to raise
 * @y: power
 * Return: the lengthof th string
 */

int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		p = x * _pow_recursion(x, y - 1);
		return (p);
	}
}
