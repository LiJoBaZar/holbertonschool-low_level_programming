#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - Initialize a variable of type struct dog
 *@d: Pointer to dog struct
 *@name: Pointer to dog name
 *@age: Pointer to dog age
 *@owner: Pointer to dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
