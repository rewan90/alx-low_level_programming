#include "lists.h"

/**
 * add_nodeEnd - add new node at the end
 * of a list_t list.
 * @head: head of linked list.
 * @str: string to store in list.
 * Return: the address of the head.
 */

list_t *add_nodeEnd(list_t **head, const char *str)
{
    list_t *new, *tmp;
    size_t nchar;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);

    for (nchar = 0; str[nchar]; nchar++)
        ;

    new->len = nchar;
    new->next = NULL;
    tmp = *head;

    if (tmp == NULL)
    {
        *head = new;
    }
    else
    {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }

    return (*head);
}