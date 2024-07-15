#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Fonction qui imprime un nom en utilisant une fonction
* passée en argument
* @name: Le nom a imprimer
* @f: Un pointeur vers la fonction qui prend un char * en argument
* et retourne void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)

	f(name);
}


