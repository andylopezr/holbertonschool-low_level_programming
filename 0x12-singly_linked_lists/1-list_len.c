#include "lists.h"
/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start of the linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *p;
	unsigned int i;

	p = h;
	for (i = 0; p; i++)
		p = p->next;
	return (i);
}
