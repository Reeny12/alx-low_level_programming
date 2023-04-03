#include <stdio.h>
#include "main.h"

/**
 * main - checks if a letter is an uppercase
 *
 * Return: 1 for uppercase and 0 for anything else
 */

int main(void)
{
	int a;

	for (a = 1; a <= 'd'; a++)
	{
	if ((a % 3 == 0) && (a % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (a % 3 == 0)
	{
	printf("Fizz");
	}
	else if (a % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", a);
	}
	if (a != 'd')
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
