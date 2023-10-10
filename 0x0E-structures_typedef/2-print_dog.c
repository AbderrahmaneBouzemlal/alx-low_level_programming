#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: The struct to be printed
 * Return: always none
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		printf("Name: (nil)\n");
		printf("Age: 0\n");
		printf("Owner: (nil)\n");
	}
}
