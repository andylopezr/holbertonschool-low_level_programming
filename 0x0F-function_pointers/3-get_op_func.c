#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - returns pointer to appropriate calculation function
 *
 * @s: string containing operation symbol
 *
 * Return: pointer to function if successful, or NULL if fails
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
