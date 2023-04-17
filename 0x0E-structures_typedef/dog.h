#ifndef DOG_H
#define DOG_H

/**
 * struct dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 * Description: ...
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - typedef for struct dog
 */

typedef struct init_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
