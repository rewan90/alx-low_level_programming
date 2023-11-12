#include "lists.h"

/**
 * free_lists - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_lists(list_t *head)
{
    list_t *current;

    while ((current = head) != NULL)
    {
        head = head->next;
        free(current->str);
        free(current);
    }
}