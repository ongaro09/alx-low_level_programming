#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog structure.
 * @d: Pointer to the dog structure.
 *
 * Description:
 * This function prints the name, age, and owner of a dog structure.
 * If any element of the structure is NULL, it prints "(nil)" instead
 * of the actual element value. If the pointer to the dog structure is
 * NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
