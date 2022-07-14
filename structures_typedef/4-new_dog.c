#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - Creates a new dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner
 *Return: Newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1, len2, i;

	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	for (len2 = 0; owner[len2] != '\0'; len2++)
		;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (len1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (len2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		ndog->name[i] = name[i];
	for (i = 0; i <= len2; i++)
		ndog->owner[i] = owner[i];
	ndog->age = age;
	return (ndog);
}
