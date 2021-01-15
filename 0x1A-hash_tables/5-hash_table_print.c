#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp;
	int flag = 1;

	if (!ht)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
		for (tmp = ht->array[idx]; tmp; tmp = tmp->next)
		{
			if (flag)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag = 0;
			}
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);
		}
	printf("}\n");
}
