#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given position.
 * @head: head of a list.
 * @idx: index of the list adde new node
 * @n: integer element.
 * Return: the new node address, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node1;
	listint_t *node2;


	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			node2 = node2->next;
		}
	}

	if (node2 == NULL && idx != 0)
		return (NULL);

	node1 = malloc(sizeof(listint_t));
	if (node2 == NULL)
		return (NULL);

	node1->n = n;

	if (idx == 0)
	{
		node1->next = *head;
		*head = node1;
	}
	else
	{
		node1->next = node2->next;
		node2->next = node1;
	}

	return (node1);
}
