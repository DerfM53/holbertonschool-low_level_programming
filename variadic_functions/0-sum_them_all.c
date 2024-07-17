#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all - Calcule la somme de tous les arguments.
* @n: Nombre d'arguments à sommer
* Return: La somme des arguments ou 0 si n est égal à 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	int total = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		{
		return (0);
		}

	for (; i < (int)n; i++)
		{
		total += va_arg(args, int);
		}
	va_end(args);

	return (total);
}
