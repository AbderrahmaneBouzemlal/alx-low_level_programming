#include "dog.h"
/**
 * init_dog - intializea variable of type struct dog
 * @d: The Structure
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: The name of the owner of the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
