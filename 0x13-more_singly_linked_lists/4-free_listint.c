#include "lists.h"


/**
 * free_listint - Frees a linked list.
 * @head: The head of the linked list.
 *
 * Return: None.
 */

void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *next_node;

	node = head;

	while (node != NULL)
	{
		next_node = node->next;

		free(node);

		node = next_node;

	}
}
