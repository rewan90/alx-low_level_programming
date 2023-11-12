#include "lists.h"

/**
 * print_list - printlist.
 * @sl: param list
 * Return: struct
 */

size_t print_list(const list_t *sl)
{
	size_t l_node;

	l_node = 0;
	while (sl != NULL)
	{
		if (sl->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", sl->len, sl->str);
		sl = sl->next;
		l_node++;
	}
	return (l_node);
}