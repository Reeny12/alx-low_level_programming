#include "main.h"

/**
 * swap_int - a function that updates a
 * pointer to 98
 * @a: input
 * @b: input
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
