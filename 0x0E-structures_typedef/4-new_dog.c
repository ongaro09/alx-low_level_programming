#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog structure.
 *
 * Description:
 * This function frees the memory allocated for a dog structure,
 * including the name and owner fields. It ensures that the pointer
 * is not NULL before performing the deallocation.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
