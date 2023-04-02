#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 * less than 400000
 * Return: always (0)
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	do {
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	} while (k + j < 4000000);
	printf("%ld\n", sum);
	return (0);
}
