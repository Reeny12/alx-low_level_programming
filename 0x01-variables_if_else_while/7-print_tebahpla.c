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
	char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}