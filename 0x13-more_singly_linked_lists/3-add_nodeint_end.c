#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *endnode;

	(void)endnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	endnode = *head;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (endnode->next != NULL)
		{
			endnode = endnode->next;
		}
		endnode->next = newnode;
	}

	return (*head);
}
