#include "main.h"
#include <math.h>
#include <stdlib.h>
/**
 * _sqrt_recursion - returns th square roo of the number
 * @n: input
 * Return: square root
 */

int _squareroot(int n, int x);

int _sqrt_recursion(int n)
{
        return (_squareroot(n, 1));
}

int _squareroot(int n, int x)
{
	int sroot = x * x;

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
                return (_squareroot(n, x + 1));
        }
}
