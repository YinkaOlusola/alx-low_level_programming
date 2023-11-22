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

	if (head)
	{
		while (*head)
		{

			next_Node = (*head);
			*head = (*head)->next;
			free(next_Node);
		}
	}
	else
		return;

	free(*head);

	head = 0;
}
