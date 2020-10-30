#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		for (i = 0; h; i++)
		{
			if (!h->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}
