#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: The new head of the linked list.
 * @str: The content of the new head.
 *
 * Return: The address of the new element or NULL if it fails
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int str_len = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		write(1, "Error\n", 7);
		return (NULL);
	}

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	while (str[str_len] != '\0')
		str_len++;

	temp->len = str_len;

	temp->next = *head;

	*head = temp;

	return (*head);

}
