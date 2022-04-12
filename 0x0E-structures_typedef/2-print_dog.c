#include "dog.h"
#include <stdlib.h>
#Include <stdio.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 * Description: Write a function that prints a struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			prinf("Name: (nil)\n");
		}
		else if (d->name != NULL)
		{
			prinf("Name: %s\n", d->name);
		}
		if (d->age < 0)
		{
			prinf("Age: (nil)\n");
		}
		else
		{
			prinf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			prinf("Owner: (nil)\n");
		}
		else if (d->owner != NULL)
		{
			prinf("Owner: %s\n", d->owner);
		}
	}
	return;
}
