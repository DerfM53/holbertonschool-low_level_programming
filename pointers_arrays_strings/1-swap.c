#include "main.h"
/**
 * swap_int - inverse les valeur de a et b.
 *
 * @a: pointeur vers la variable a.
 *
 * @b: pointeur vers la variable b.
 */
void swap_int(int *a, int *b)
{
	int temporaire = 0;

	temporaire = *b;
	*b = *a;
	*a = temporaire;
}
