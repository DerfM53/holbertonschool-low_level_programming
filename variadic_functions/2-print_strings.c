#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Imprime des chaînes, suivies d'une nouvelle ligne.
* @separator: Chaînea imprimer entre les chaînes
* @n: Nombre de chaînes passéea la fonction.
*
* Description: Cette fonction prend un nombre variable de chaîne
* et les imprime, séparées par la chaîne donn
* Si le séparateur est NULL, il n'est pas imprim�
* Si une chaîne est NULL, "(nil)" est imprim�a la place.
* Une nouvelle ligne est ajouté a la fin.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list args;
	char *recup;

	va_start(args, n);

	for (c = 0; c < n; c++)
		{
		recup = va_arg(args, char *);

		if (recup == NULL)
			{
			printf("(nil)");
			}
		else
			{
			printf("%s", recup);
			}
		if (separator != NULL && c < n - 1)
			{
			printf("%s", separator);
			}
		}
	va_end(args);
	printf("\n");
}
