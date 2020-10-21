#ifndef _FUNCTIONPOINTERS_H_
#define _FUNCTIONPOINTERS_H_

/* prints a name. */
void print_name(char *name, void (*f)(char *));

/* executes a function given as a parameter on each element of an array. */
void array_iterator(int *array, size_t size, void (*action)(int));

/* searches for an integer. */
int int_index(int *array, int size, int (*cmp)(int));

#endif
