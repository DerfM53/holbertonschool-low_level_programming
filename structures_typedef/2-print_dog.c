#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - Affiche les valeurs de la structure dog
 * @d: Pointeur vers la structure dog à affiche
 *
 * Cette fonction affiche les valeurs de la structure pointée par `d`
 * Si `d` est NULL, la fonction ne fait rien. Si l'une des variables
 * de la structure dog est NULL ou si l'âge est inférieur ou é
 * elle affiche "nil".
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



