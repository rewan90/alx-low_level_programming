#include "lists.h"
/**
 * add_node - adds a new node at the head
 * of a list_t
 * @head: head   linked list.
 * @str: string to store in  list.
 * Return: address  the head.
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    size_t nchr;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);

    for (nchr = 0; str[nchr]; nchr++)
        ;

    new->len = nchr;
    new->next = *head;
    *head = new;

    return (*head);
}