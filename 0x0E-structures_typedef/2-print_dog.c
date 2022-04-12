#include "dog.h"
#include <stdlib.h>

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
		if (d->age == NULL)
		{
			prinf("Age: (nil)\n");
		}
		else if (d->age < 0)
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
}
