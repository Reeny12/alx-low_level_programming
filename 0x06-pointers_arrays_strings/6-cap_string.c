#include "main.h"

/**
 * cap_string - concatenates two strings
 * @str: input
 * Return: a pointer to the changed string
 */

char *cap_string(char *str)
{
	int i = 0;

	do {
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' ' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
		    str[i - 1] == 44 ||
		    str[i - 1] == 59 ||
		    str[i - 1] == 46 ||
		    str[i - 1] == 33 ||
		    str[i - 1] == 63 ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    i == 0)
			str[i] -= 32;
		i++;
	} while (str[i]);
	return (str);
}
