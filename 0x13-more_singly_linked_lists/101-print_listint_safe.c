#include "lists.h"
/**
 * print_listint_safe - Prints a linked list and returns the number of nodes
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *curr = head, *tmp = NULL;
    while (curr)
    {
        printf("[%p] %d\n", (void *) curr, curr->n);
        count++;
        if (curr > curr->next || !curr->next)
            curr = curr->next;
        else
        {
            tmp = curr;
            curr = curr->next;
            count++;
            if (tmp > curr->next || !curr->next)
                printf("-> [%p] %d\n", (void *) curr, curr->n);
        }
        if (!curr)
            break;
    }
    return (count);
}
