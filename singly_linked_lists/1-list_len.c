#include "lists.h"
/*
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0; /*compteur pour le nombre de noeud*/
	const list_t *actual = h; /*pointeur pour parcourir la liste*/

	while (actual != NULL) /*tand que le noeud actuel n'est pas NULL*/
	{
		if (actual->str == NULL)/*si la chaine est NULL*/
		{
			return (0);
		}
		else/*si la chaine n'est pas NULL*/

		len++;/*incrementer compteur*/
		actual = actual->next;/*passer au noeud suivant*/
	}
	return (len);/*retourner le nombre de noeud*/
}
