#include <stdio.h>
#include <stdlib.h>
/**
 *main - imprime tous les arguments passés au programme
 * @argc: nombre d'arguments passés au programme
 * @argv: tableau des arguments passés au programme
 *
 * Description: Ce programme affiche chaque argument
 * passé au programme,
 * un par ligne, y compris le nom du programme lui-même.
 * Return: Toujours 0 (succès)
 *
 */
int main(int argc, char **argv)
{
	int i;

for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
