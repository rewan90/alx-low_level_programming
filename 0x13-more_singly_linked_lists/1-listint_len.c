#include "list.h"

/**
 * listint_len - return the numbers of the elements in a linked listint_t list.
 *
 * Return: number of elements in a linked  list
 */
size_t listint_len(const listint_t *t)
{
	size_t count = 0;

	while (t != NULL)
	{
		count++;
		t = t->next;
	}
	return (count);
}