#include "lists.h"

/**
 * sum_listint - Sums all the data in a linkedlist
 * @head:  Head of the linked list.
 *
 * Return: The sum of all the data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *currentNode;

	currentNode = head;

	if (head == NULL)
		return (0);

	while (currentNode != NULL)
	{
		sum += (currentNode->n);

		currentNode = currentNode->next;
	}

	return (sum);
}
