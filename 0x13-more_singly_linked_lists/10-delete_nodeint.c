#include "lists.h"

/**
* delete_nodeint_at_index - deletes node.
* @head: head pointer.
* @index: index of delete node
* Return: 1 if it pass, -1 if it fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *Prev;
	listint_t *Next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	Next = *head;
	Prev = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(Next);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (Next == NULL)
			return (-1);
		Prev = Next;
		Next = Next->next;
	}
	if (prev)
		Prev->next = Next->next;
	free(Next);

	return (1);
}
