#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *p;
	unsigned int i = 0;

	p = h;

	if (h)
	{
		for (i = 0; p; i++)
		{
			if (!h->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", p->len, p->str);
			p = p->next;
		}
	}
	return (i);
}
