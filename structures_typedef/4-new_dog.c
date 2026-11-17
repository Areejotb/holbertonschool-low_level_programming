#include "dog.h"
#include <stdlib.h>

/**
 * _copy - duplicates a string into newly allocated memory
 * @src: string to copy
 *
 * Return: pointer to the copy, or NULL if src is NULL
 * or if malloc fails
 */
static char *_copy(char *src)
{
	char *dup;
	int len = 0, i;

	if (src == NULL)
		return (NULL);

	while (src[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = src[i];

	return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Stores a copy of name and owner.
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _copy(name);
	if (name != NULL && dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _copy(owner);
	if (owner != NULL && dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
