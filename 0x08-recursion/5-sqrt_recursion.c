#include "main.h"

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
	int sqrt = x * x;
        int a = _squareroot(n, x + 1);

        if (sqrt > n)
        {
                return (-1);
        }
        else if (sqrt == n)
        {
                return (x);
        }
        else
        {
                return (a);
        }
}
