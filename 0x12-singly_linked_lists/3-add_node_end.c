#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *endnode;
	int nchar;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	newnode->len = nchar;
	newnode->next = NULL;
	endnode = *head;

	if (endnode == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (endnode->next != NULL)
			endnode = endnode->next;
		endnode->next = newnode;
	}

	return (*head);
}
