#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Imprime des nombres, suivis d'une nouvelle ligne.
* @separator: Chaîne de caractères à imprimer entre les nomb.
* @n: Nombre de nombres entiers passés à la fonctio
* Description: Cette fonction prend un nombre variable d'arguments entiers
* et les imprime, séparés par la chaîne de caractères do
* en argument. Si le séparateur est NULL, il n'est pas imprimé.
* Une nouvelle ligne est ajoutée à la fin de la sortie.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int recup = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		{
	recup =	va_arg(args, int);

		if (i > 0 && separator != NULL)
			{
			printf("%s", separator);
			}
		printf("%d", recup);
		}
	va_end(args);
	printf("\n");
}
