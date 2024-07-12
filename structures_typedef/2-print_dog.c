#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - imprime les valeurs de la structure dog
* retourner par le pointeur *d, si il est NULL il return rien.
* Si une ou plusieurs des variables de struct dog sont NULL
* il imprime "nil"
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		{
		return;
		}
	if (d->name == NULL || d->age <= 0 || d->owner == NULL)
		{
		printf("nil");
		}
	else
		{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
		}
}



