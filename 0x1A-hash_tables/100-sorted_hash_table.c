#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to the newly created hash table, NULL if fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	unsigned long int index;

	if (size == 0)
		return (NULL);
	hash_table = malloc(sizeof(shash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->array = malloc(sizeof(shash_node_t) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		hash_table->array[index] = NULL;
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	hash_table->size = size;
	return (hash_table);
}

/**
 * hashdllsort - sorts a node into the proper place in the
 * hash table's sorted list
 * @ht: hash table with sorted dll
 * @movnode: address of node
 */
void hashdllsort(shash_table_t *ht, shash_node_t *movnode)
{
	shash_node_t *ptr;

	if (movnode->snext)
		movnode->snext->sprev = movnode->sprev;
	if (movnode->sprev)
		movnode->sprev->snext = movnode->snext;
	if (!ht->shead)
	{
		ht->shead = ht->stail = movnode;
		return;
	}
	ptr = ht->shead;
	if (strcmp(movnode->key, ptr->key) < 0)
	{
		movnode->snext = ht->shead;
		ht->shead = ht->shead->sprev = movnode;
		return;
	}
	ptr = ptr->snext;
	while (ptr)
	{
		if (strcmp(movnode->key, ptr->key) < 0)
		{
			movnode->snext = ptr;
			movnode->sprev = ptr->sprev;
			ptr->sprev = movnode;
			if (movnode->sprev)
				movnode->sprev->snext = movnode;
			return;
		}
		ptr = ptr->snext;
	}
	movnode->sprev = ht->stail;
	ht->stail->snext = movnode;
	ht->stail = movnode;
}

/**
 * shash_table_set - adds an element to the hash table, in case of collision,
 * adds the new node at the beginning of the list
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: the value associated with the key. value can be an empty string
 * Return: 1 if succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *tmp, *new_node;
	char *alt;

	if (!ht || !ht->array || ht->size == 0
	    || !key || *key == 0 || !value)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			break;
		tmp = tmp->next;
	}
	if (!tmp)
	{
		new_node = malloc(sizeof(shash_node_t));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		if (!new_node->key)
		{
			free(new_node);
			return (0);
		}
		new_node->value = strdup(value);
		if (!new_node->value)
		{
			free(new_node->key);
			free(new_node);
			return (0);
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
		hashdllsort(ht, new_node);
	}
	else
	{
		if (strcmp(value, tmp->value) == 0)
			return (1);
		alt = strdup(value);
		if (!value)
			return (0);
		free(tmp->value);
		tmp->value = alt;
		hashdllsort(ht, tmp);
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (!ht || !key || strlen(key) == 0)
	  return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (strdup(tmp->value));
	}
	return (NULL);
}

/**
 * shash_table_print - prints sorted hash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	tmp = ht->shead;
	printf("{");
	if (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
	}
	while (tmp)
	{
		printf(", '%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints hash table in reverse
 * @ht: hast table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	tmp = ht->stail;
	printf("{");
	if (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
	}
	while (tmp)
	{
		printf(", '%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a hash table
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *next;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
		for (tmp = ht->array[index]; tmp; tmp = next)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	free(ht->array);
	free(ht);
}
