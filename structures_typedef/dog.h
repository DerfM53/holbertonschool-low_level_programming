#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Structure représentant un chien
 * @name: Pointeur vers une chaîne de caractèr
 * repre�sentant le nom du chie
 * @age: Âge du chien en anné
 * représenté comme un flotta
 * @owner: Pointeur vers une chaîne de caractèr
 * représentant le nom du propriétaire du chi
 *
 * Description: Cette structure stocke les informations de base
 * relatives à un chien, y compris son nom, son âge et son propriétaire.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
