#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t  *me;
	
	me = malloc(sizeof(dog_t));
	if (me == NULL)
		return (NULL);
	me->name = name;
	me->age = age;
	me->owner = owner;
	return (me);
}
