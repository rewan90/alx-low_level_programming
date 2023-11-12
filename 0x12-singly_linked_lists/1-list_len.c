#include "lists.h"
/**
 * list_len - returns number of elements inlist.
 * @sl: singly linked list.
 * Return: number of elements
 */

size_t list_len(const list_t *sl)
{
    size_t nlem;

    nlem = 0;
    while (sl != NULL)
    {
        sl = sl->next;
        nlem++;
    }
    return (nlem);
}