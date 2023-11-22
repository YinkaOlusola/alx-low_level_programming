#include "lists.h"

/**
 * get_nodeint_at_index - Gets a node at an index.
 * @head: Head of the linked list.
 * @index: Position of the node.
 *
 * Return: Node at position index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	unsigned int counter = 0;

	node = head;

	if (head == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (counter == index)
			return (node);

		node = node->next;

		counter++;
	}

	return (NULL);
}
