#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: The linked list
 * @str: Input string.
 *
 * Return: Address of the new element or null if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int str_len = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{	write(1, "Error\n", 7);
		return (NULL); }

	temp->str = strdup(str);

	if (temp->str == NULL)
	{	free(temp);
		return (NULL); }

	while (str[str_len] != '\0')
		str_len++;

	temp->len = str_len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		list_t *currentNode = *head;

		while (currentNode->next != NULL)
			currentNode = currentNode->next;

		currentNode->next = temp;
	}

	return (*head);
}

