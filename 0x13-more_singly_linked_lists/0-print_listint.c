#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints elements of a listint_t list.
 * @h: more list to print 
 *
 * Return: numbers of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}