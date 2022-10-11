#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - initialize a variable of type `struct dog`
  *@d: struct dog
  *@name: name of dog as a string
  *@age: age as an integer
  *@owner: name of owner as a string
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
