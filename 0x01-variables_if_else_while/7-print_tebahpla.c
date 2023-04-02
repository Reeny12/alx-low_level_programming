#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if a number is positive,zero or negative
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
