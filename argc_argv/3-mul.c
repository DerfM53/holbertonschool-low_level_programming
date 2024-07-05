#include <stdio.h>
#include <stdlib.h>
/**
 *  main - Multiplie deux entiers passés en arguments
 * @argc: Nombre d'arguments
 * @argv: Tableau de chaînes de caractères représentant les arguments
 *
 * Description: Ce programme multiplie deux entiers passés en arguments
 * et affiche le résultat. Si le nombre d'arguments est incorrect,
 * il affiche une erreur.
 *
 * Return: 0 si la multiplication est réussie
 * 1 si une erreur se produit
 *
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
