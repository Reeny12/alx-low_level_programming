#include "main.h"

/**
 * reverse_array - concatenates two strings
 * @a: input
 * @n: input
 * Return: dest
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

