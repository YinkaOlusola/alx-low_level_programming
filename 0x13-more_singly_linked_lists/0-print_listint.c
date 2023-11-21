#include "lists.h"
#include <stdio.h>
#include <stdlid.h>


/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Head of a linked list.
 *
 * Return: Number of nodes.
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n != NULL)
		{
			print(h->n);
			count++;
		}
	}
	return (count);
}
