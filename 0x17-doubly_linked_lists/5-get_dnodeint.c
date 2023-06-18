#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - ...
 * @head: A pointer to the name of the file to create.
 * @index: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}

	return (NULL);
}
