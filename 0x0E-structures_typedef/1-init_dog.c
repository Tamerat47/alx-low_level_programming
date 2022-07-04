#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: points to the structure
 * @name: points to the name of a dog
 * @age: age of the dog
 * @owner: pointes to the dog's owner
 *
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
		(*dog).name = name;
		(*dog).age = age;
		(*dog).owner = owner;
}
