#include "lists.h"
#include <stdlib.h>
#include <string.h>
/*
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Double pointer to the head of the list.
* @str: String to be duplicated and added to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*
* Description: This function creates a new node with the provided string,
* duplicates it, and adds the new node at the end of the linked list.
* If the list is empty, the new node becomes the head of the list.
* Memory for the new node and the duplicated string is allocated
* dynamically, and it is the caller's responsibility to free it.
*/
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