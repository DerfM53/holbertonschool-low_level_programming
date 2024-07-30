#include "lists.h"
#include <stdio.h>
/*
 * dlistint_len - Returns the number of elements in a linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t nbNode = 0;
    const dlistint_t *actual = h;

    while (actual != NULL)
    {
    nbNode++;
    actual = actual->next;
    }
return (nbNode);
}