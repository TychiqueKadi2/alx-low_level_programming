#ifndef DOG_H
#define DOG_H
/**
 * struct dog - creates info about a dog
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 * Description: first alx struct
 */

/**
 * dog_t - new dog name
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
