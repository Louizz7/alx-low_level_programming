#include "lists.h"

/**
 *free_listint - free list.
 * @head: head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tail;

	while (head != NULL)
	{
	tail = head;
	head = head->next;
	free(tail);
	}
}
