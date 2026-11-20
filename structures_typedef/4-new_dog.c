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
	int namelen, ownerlen;

	if (name == NULL || owner == NULL)
		return (NULL);

	namelen = strlen(name) + 1;
	ownerlen = strlen(owner) + 1;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * namelen);
	if (newdog->name == NULL)
		return (NULL);

	newdog->owner = malloc(sizeof(char) * ownerlen);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);

}
