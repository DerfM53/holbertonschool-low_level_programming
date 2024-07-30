#include "lists.h"
#include <stdlib.h>
#include <string.h>






list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newnode;
    list_t *last = *head;

    newnode = malloc(sizeof(list_t));
    if (newnode == NULL) /*Check if malloc failed*/
    {
        return (NULL);
    }

    /*Duplicate the string and assign it to the new node*/
    newnode->str = strdup(str);
    if (newnode->str == NULL) /*Check if strdup failed*/
    {
        free(newnode); /*Free the allocated node if strdup fails*/
        return (NULL);
    }

    /*Calculate the length of the string and assign it to the new node*/
    newnode->len = strlen(newnode->str);
    newnode->next = NULL;

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
    
    return (newnode); /*Return the address of the new node*/
}