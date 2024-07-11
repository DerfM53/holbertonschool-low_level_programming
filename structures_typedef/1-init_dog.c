#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure de type struct dog initialiser
 * @name: Pointeur vers une chaîne de caractères représent
 * le nom du chien
 * @age: Âge du chien en années, de type float
 * @owner: Pointeur vers une chaîne de caractères représent
 * le nom du propriétaire du chie
 *
 * Description: Cette fonction initialise les membres de la structure dog
 * avec les valeurs passées en paramètre
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

return;
}
