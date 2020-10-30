#include "lists.h"
/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double pointer to a lined list
 * @str: string to add to the new node
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	if (!str)
		return (NULL);
	p = malloc(sizeof(list_t));
	if (!p)
		return (NULL);
	p->str = strdup(str);
	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}
	p->len = _strlen(p->str);
	p->next = *head;
	*head = p;
	return (p);
}

/**
 * _strlen - returns the length of a string
 * @str: string to check
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
