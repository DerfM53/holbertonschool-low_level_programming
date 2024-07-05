#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Additionne les entiers passés en arguments
 * @argc: Nombre d'arguments
 * @argv: Tableau de chaînes de caractères représentant les arguments
 *
 * Description: Ce programme additionne les entiers passés en arguments
 * et affiche le résultat. Si aucun argument n'est passé, il affiche 0.
 * Si un argument contient des symboles non numériques, il affiche une erreur.
 *
 * Return: 0 si l'addition est réussie, 1 si une erreur se produit
 */
int main(int argc, char **argv)
{
	int somme = 0;
	int i, j;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	somme += atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}
