#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list.
 * @head: The linked list to be freed.
 *
 * Return: None.
 */


void free_list(list_t *head)
{
	list_t *currentNode;
	list_t *nextNode;

	currentNode = head;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;

		free(currentNode->str);
		free(currentNode);

		currentNode = nextNode;
	}
}
