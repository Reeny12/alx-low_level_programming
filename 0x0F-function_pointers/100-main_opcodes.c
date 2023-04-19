#include <stdio.h>
#include <stdlib.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int byte, i;
	char *bulk;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte == atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	bulk = (char *)main;
	for (; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx ", bulk[i]);
			break;
		}
	}
	return (0);
}
