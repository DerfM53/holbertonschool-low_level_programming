#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list: print all the elements of a
 * list_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0; /*compteur pour le nombre de noeud*/	
	const list_t *actual = h; /*pointeur pour parcourir la liste*/
	
	while (actual != NULL) /*tand que le noeud actuel n'est pas NULL*/
	{
		if (actual->str == NULL)/*si la chaine est NULL*/
		{
			printf("[0] (nil)\n");/*afficher [0] (nil)*/
		}
		else/*si la chaine n'est pas NULL*/
		{
			printf("[%u] %s\n", actual->len, actual->str);
		}
		len++;/*incrementer compteur*/
		actual = actual->next;/*passer au noeud suivant*/
	}
	return (len);/*retourner le nombre de noeud*/
}