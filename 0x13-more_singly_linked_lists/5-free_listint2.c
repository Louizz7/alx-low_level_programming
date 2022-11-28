#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tail;
	listint_t *end;

	if (head != NULL)
	{
		end = *head;
		while ((tail = end) != NULL)
		{
			end = end->next;
			free(tail);
		}
		*head = NULL;
	}
}
