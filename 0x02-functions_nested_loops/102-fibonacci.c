#include <stdio.h>

/**
 * main - prints the first 52 fibonacci
 *
 * Return: always (0)
 */

int main(void)
{
	int a = 0;
	long b = 1, k = 2;

	do {
	if (a == 0)
	printf("%ld", b);
	else if (a == 1)
	printf(", %ld", k);
	else
	{
	k += b;
	b = k - b;
	printf(", %ld", k);
	}
	++a;
	} while (a < '2');
	printf("\n");
	return (0);
}
