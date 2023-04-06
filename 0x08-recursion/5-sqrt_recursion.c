#include "main.h"
#include <math.h>
#include <stdlib.h>
/**
 * _sqrt_recursion - returns th square roo of the number
 * @n: input
 * @x: iterate number
 * Return: square root
 */

int _squareroot(int n, int x);

int _sqrt_recursion(int n)
{
	return (_squareroot(n, 1));
}

/**
 * _squareroot - calculates square root of a number
 * @n: number to calculate square of a number
 * @x: iterate number
 * Return: squareroot
 */

int _squareroot(int n, int x)
{
	int sroot = x * x;
	int y = x + 1;

	if (sroot > n)
	{
		return (-1);
	}
	else if (sroot == n)
	{
		return (x);
	}
	else
	{
		return (_squareroot(n, y));
	}
}
