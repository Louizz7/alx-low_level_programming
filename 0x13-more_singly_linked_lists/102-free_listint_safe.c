#include "lists.h"

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *H1;
    listint_t *H2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&H2, 0);
    add_nodeint(&H2, 1);
    add_nodeint(&H2, 2);
    add_nodeint(&H2, 3);
    add_nodeint(&H2, 4);
    add_nodeint(&H2, 98);
    add_nodeint(&H2, 402);
    add_nodeint(&H2, 1024);
    print_listint_safe(H2);
    head = NULL;
    node = add_nodeint(&H1, 0);
    add_nodeint(&H1, 1);
    add_nodeint(&H1, 2);
    add_nodeint(&H1, 3);
    add_nodeint(&H1, 4);
    node->next = add_nodeint(&H1, 98);
    add_nodeint(&H1, 402);
    add_nodeint(&H1, 1024);
    print_listint_safe(H1);
    free_listint_safe(&H2);
    free_listint_safe(&H1);
    printf("%p, %p\n", (void *)H2, (void *)H1);
    return (0);
}
