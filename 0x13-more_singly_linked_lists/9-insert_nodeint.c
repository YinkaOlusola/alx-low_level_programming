#include "lists.h"

/**
 * insert_nodeint_at_index -  Inserts a node at an index
 * @head: Head node of linked list
 * @idx: Index to insert node.
 * @n: Data in the node.
 *
 * Return: Address of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentNode, *temp_Node;

	unsigned int counter = 1;

	if (head)
	{
		temp_Node = malloc(sizeof(listint_t));
		if (temp_Node == NULL)
			return (NULL);

		temp_Node->n = n;
		if (idx > 0)
		{
			currentNode = *head;
			while (currentNode)
			{
				if (counter == idx)
				{
					temp_Node->next = currentNode->next;
					currentNode->next = temp_Node;
					return (temp_Node);
				}

				currentNode = currentNode->next;
				counter++;
			}
			if (idx > counter)
				return (NULL);
		}
		else
		{
			temp_Node->next = *head;
			*head = temp_Node;
		}
		return (temp_Node);
	}
	return (NULL);
}
