#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of string
 * @next: points to next node
 *
 * Description: singly linked list  structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *sl);
size_t list_len(const list_t *sl);
list_t *add_node(list_t **head, const char *str);
list_t *add_nodeEnd(list_t **head, const char *str);
void free_lists(list_t *head);

#endif