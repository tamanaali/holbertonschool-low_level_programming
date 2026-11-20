#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the new dog characteristics
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int namelen, ownerlen, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	namelen = 0;
	while (name[namelen] != '\0')
		namelen++;

	ownerlen = 0;
	while (owner[ownerlen] != '\0')
		ownerlen++;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (namelen + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i <= namelen; i++)
		newdog->name[i] = name[i];
	for (i = 0; i <= ownerlen; i++)
		newdog->age = age;

	newdog->age = age;
	return (newdog);
}
