#include "main.h"

/**
 * checker - check if the number is prime
 * @n:the number to be checked
 * @x: the number of iterations
 * Return: 1 for prime and 0 for composite
 */

int checker(int n, int x)
{
	int y = x + 1;

	if (n <= 1)
	{
		return (0);
	}
	else if ((n % x == 0) && (x > 1))
	{
		return (0);
	}
	else if ((n / x) < x)
	{
		return (1);
	}
	else
	{
		return (checker(n, y));
	}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: input
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (checker(n, 1));
}
