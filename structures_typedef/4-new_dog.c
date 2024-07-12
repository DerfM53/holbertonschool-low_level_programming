#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Crée un nouveau chie
 * @name: Nom du chien (chaîne de caractère
 * @age: Âge du chien (nombre flottant
 * @owner: Propriétaire du chien (chaîne de caractèr
 *
 * Description:
 * Cette fonction alloue de la mémoire pou
 * une nouvelle structure dog_t
 * copie les valeurs fournies pour le nom et le propriétaire
 * et initialise l'âge. Si une allocation échoue, elle lib�
 * toute mémoire déjà allouée et retourne N
 *
 * Return:
 * Un pointeur vers la nouvelle structure new_dog
 * ou NULL si une allocation échoue
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
	return (NULL);
	}

	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);

	if (new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
	}
	return (new_dog);
}

