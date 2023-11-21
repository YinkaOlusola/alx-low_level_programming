#include "lists.h"


/**
 * listint_len - Calculates the number of elements in linked list.
 * @h: Head of the list
 *
 * Return: Number of elements in a linked list.
 */


size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}

	return (count);
}
