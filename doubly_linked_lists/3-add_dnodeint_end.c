#include "lists.h"
#include <stdlib.h>
/*
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Double pointer to the head of the list.
* @n: value added to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*
* Description: This function creates a new node and adds the new node at the end of the linked list.
* If the list is empty, the new node becomes the head of the list.
* Memory for the new node is allocated
* dynamically, and it is the caller's responsibility to free it.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newnode;
    dlistint_t *last = *head;

    newnode = malloc(sizeof(dlistint_t));
    if (newnode == NULL)
    {
        return (NULL);
        free(newnode);
    }

    newnode->n = n;

    if (*head == NULL)
    {
        *head = newnode;
        return (newnode);
    }
    while (last->next !=NULL)
    {
        last = last->next;
    }
    last->next = newnode;

    return (newnode);
}