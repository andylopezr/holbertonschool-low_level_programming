#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct list_s - singly linked list node structure
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/* writes characters to stdout */
int _putchar(char);

/* prints all the elements of a list_t list */
size_t print_list(const list_t *h);

/* returns the number of elements in a linked list_t list */
size_t list_len(const list_t *h);

/* adds a new node at the beginning of a list_t list */
list_t *add_node(list_t **head, const char *str);

/* adds a new node at the end of a list_t list */
list_t *add_node_end(list_t **head, const char *str);

/* frees a list_t list */
void free_list(list_t *head);

/* returns the length of a string */
unsigned int _strlen(char *str);
#endif /* _LISTS_H_ */
