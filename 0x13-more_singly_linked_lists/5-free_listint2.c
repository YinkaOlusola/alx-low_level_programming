#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Head of the linked list.
 *
 * Return: None.
 */

void free_listint2(listint_t **head)
{
	listint_t *next_Node;

	if ((*head) == NULL)
		*head = NULL;

	while ((*head) != NULL)
	{
		next_Node = (*head)->next;

		free(*head);

		*head = next_Node;
	}
}
