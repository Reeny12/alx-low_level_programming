#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input
 * Return: string
 */

int _atoi(char *s)
{
	int i = 0, a = 0, n = 0, len = 0, f = 0, num = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == ' ')
			++a;
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = s[i] - 48;
			if (a % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
