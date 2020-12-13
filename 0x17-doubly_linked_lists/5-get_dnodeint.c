#include "lists.h"
/**
 * get_dnodeint_at_index - finds a specific node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to retrieve
 *
 * Return: address to node, or NULL if fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (head);
}
