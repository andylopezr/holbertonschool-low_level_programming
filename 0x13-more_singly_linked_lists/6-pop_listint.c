#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the beginning of the list
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int i;

	if (!head || !*head)
		return (0);
	first = *head;
	*head = first->next;
	i = first->n;
	free(first);
	return (i);
}
