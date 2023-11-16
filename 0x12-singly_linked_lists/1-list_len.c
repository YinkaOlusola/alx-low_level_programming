#include "lists.h"


/**
 * list_len - Returns the number of elements in a Linked list.
 * @h: A linked list.
 *
 * Return: Number of elements in a linked list.
 */


size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		counter++;

		h = h->next;
	}

	return (counter);
}
