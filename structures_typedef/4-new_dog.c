#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: pointer to the new dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	unsigned int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	new->name = malloc(sizeof(char) * (i + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	for (j = 0; owner[j] != '\0'; j++)
		;
	new->owner = malloc(sizeof(char) * (j + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		new->owner[j] = owner[j];
	new->owner[j] = '\0';

	new->age = age;

	return (new);
}
