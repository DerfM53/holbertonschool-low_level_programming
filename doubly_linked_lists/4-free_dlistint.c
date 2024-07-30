#include "lists.h"
#include <stdlib.h>
/**
* free_dlistint - Frees a dlistint_t list.
* @head: Pointer to the head of the list to be freed.
*
* Description: This function traverses the linked list and frees each
* node one by one. After freeing all nodes, it sets the head pointer
* to NULL.
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *destroyed = head;

    while (destroyed != NULL)
    {
        dlistint_t *temp = destroyed;
        destroyed = destroyed->next;
        free(temp);
    }
}