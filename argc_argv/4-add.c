#include <stdio.h>
#include <stdlib.h>
/**
 *main - Additionne les entiers passés en arguments
 * @argc: Nombre d'arguments
 * @argv: Tableau de chaînes de caractères représentant les arguments
 *
 * Description: Ce programme additionne les entiers passés en arguments
 * et affiche le résultat. Si aucun argument n'est passé
 * il affiche une erreur
 *
 * Return: 0 si l'addition est réussie, 1 si une erreur se produit
 *
 */

int main(int argc, char **argv)
{
	int somme = 0;
	int i;

if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
for (i = 1; i < argc; i++)
	{
	somme += atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}
