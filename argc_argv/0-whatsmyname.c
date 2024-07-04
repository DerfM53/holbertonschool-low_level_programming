#include <stdio.h>
/**
 *  main - imprime le premier argument passé au programme
 * @argc: nombre d'arguments passés au programme
 * @argv: tableau des arguments passés au programme
 *
 * Description: Ce programme affiche le nom du programme exécuté.
 * Return: Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (argc);
}
