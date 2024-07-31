#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint: print all the elements of a
 * dlistint_t list.
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbNode = 0;
	const dlistint_t *actual = h;

	while (actual != NULL)
	{
	printf("%d\n", actual->n);

	nbNode++;
	actual = actual->next;
	}
return (nbNode);
}
