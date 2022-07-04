#ifndef dog_h
#define dog_h

/**
 * struct dog - dog data
 * @name: dogs name
 * @age: dogs age
 * @owner: who owns the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
