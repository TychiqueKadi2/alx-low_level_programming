#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: of dog
 * @age: of dog
 * @owner: of do
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t n, o, a;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (n = 0; name[n] != '\0'; n++)
		;
	n++;
	dog->name = malloc(sizeof(char) * n);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < n; a++)
		dog->name[a] = name[a];
	dog->age = age;

	for (o = 0; owner[o] != '\0'; o++)
		;
	o++;
	dog->owner = malloc(sizeof(char) * o);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < o; a++)
		dog->owner[a] = owner[a];
	return (dog);
}
