#include "main.h"
/**
 * print_chessboard - Affiche un échiquier représenté par un tableau 8x8.
 * @a: Pointeur vers le tableau 2D représentant l'échiquier.
 *
 * Description :
 * Cette fonction parcourt un tableau 2D représentant un échiquier et affiche
 * chaque caractère sur la sortie standard, suivis d'un reto la ligne aprè
 * chaque ligne complète.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
		{
		_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
