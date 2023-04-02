#include "main.h"

/**
 * print_array - a function that updates a
 * pointer to 98
 * @a: input
 * @n: input
 * Return: n
 */

void print_array(int *a, int n)
{

	int j = 0;

	while (j < n)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
		j++;
	}
	printf("\n");
}
