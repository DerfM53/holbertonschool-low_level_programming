#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @n: value of element
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newnode;

    newnode = malloc(sizeof(dlistint_t));
    if (newnode == NULL)
    {
        return (NULL);
        free(newnode);
    }
    newnode->n = n;

    newnode->next = *head;

    *head = newnode;

    return (newnode);
}