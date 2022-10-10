#include "dog.h"
#include <stdlib.h>
/**
* free_dog - write a function that frees dogs
* @d: pointer to struct
* Return: nothing
**/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
