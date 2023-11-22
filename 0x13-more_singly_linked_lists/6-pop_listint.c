#include "lists.h"


/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Head of the node
 *
 * Return: Head node data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_Node;
	int content = 0;

	if (*head != NULL)
	{
		temp_Node = (*head)->next;
		content = (*head)->n;
		free(*head);

		*head = temp_Node;
	}

	else
		return (0);

	return (content);
}
