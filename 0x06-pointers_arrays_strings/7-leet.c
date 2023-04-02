#include "main.h"

/**
 * leet - concatenates two strings
 * @n: input
 * Return: dest
 */

char *leet(char *n)
{
	int a, b;
	char sample1[] = "aAeEoOtTlL";
	char sample2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == sample1[b])
			{
				n[a] = sample2[b];
			}
		}
	}
	return (n);
}
