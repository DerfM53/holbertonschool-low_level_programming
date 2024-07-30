#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *newnode;

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
    
    /*Make the new node point to the current head*/
    newnode->next = *head;

    /*Update the head to point to the new node*/
    *head = newnode;

    return (newnode); /*Return the address of the new node*/
}