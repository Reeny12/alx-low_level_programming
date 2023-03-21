#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Return - on success 1
 * on error -1 is returned
 */

int_putchar(char c)
{
	return(write(1, &c,1))
}
