#include "list.h"
#include <stdio.h>

/**
 * print_listint -  prints elements of a listint_t list.
 * @h: more list to print 
 *
 * Return: numbers of elements in the list
 */
size_t print_listint(const listint_t *t)
{
	size_t count = 0;

	while (t != NULL)
	{
		printf("%d\n", t->n);
		t = t->next;
		count++;
	}
	return (count);
}