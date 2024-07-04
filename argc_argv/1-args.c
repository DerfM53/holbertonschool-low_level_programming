#include <stdio.h>
#include <stdlib.h>
/**
 * main - imprime le nombre d'arguments passé programm
 * @argc: nombre d'arguments passés au programme
 * @argv: tableau des arguments passés au programme (non utilisé)
 *
 * Description: Ce programme affiche le nombre d'arguments
 *              en excluant le nom du programme lui-même.
 * Return: Toujours 0 (succès)
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
