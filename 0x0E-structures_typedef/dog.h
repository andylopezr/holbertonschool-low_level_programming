#ifndef STRUCTDOG_
#define STRUCTDOG_
/**
 * struct dog - Variables for dog description
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* initializes a variable of type struct dog. */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* prints a struct dog. */
void print_dog(struct dog *d);
#endif
