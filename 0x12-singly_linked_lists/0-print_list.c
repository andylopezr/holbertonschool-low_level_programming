#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *p;
	int i;

	p = h;
	for (i = 0; p; i++)
	{
		printf("[%u] %s\n", p->len, p->str);
		p = p->next;
	}
	return (i);
}
