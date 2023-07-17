#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to struct dog to free
 *
 * Description: This function frees the memory allocated for the provided struct dog,
 * including the name and owner members. If @d is NULL, no action is performed.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
