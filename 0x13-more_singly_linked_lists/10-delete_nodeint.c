#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at an index.
 * @head: Head of linked list
 * @index: Index of node to delete.
 *
 * Return: 1 if succeeded, -1 otherwise.
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *temp_Node;

	unsigned int counter = 1;

	currentNode = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = currentNode->next;
		free(currentNode);
		return (1);
	}

	while (currentNode)
	{
		if (counter == index)
		{
			temp_Node = currentNode->next;
			currentNode->next = temp_Node->next;
			free(temp_Node);
			return (1);
		}

		currentNode = currentNode->next;
		counter++;
	}

	return (-1);
}
