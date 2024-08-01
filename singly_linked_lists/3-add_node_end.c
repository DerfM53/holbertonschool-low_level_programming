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
	list_t *new_node;
	list_t *temp;
	char *new_str;
	int len;

	new_str = strdup(str);
	if (new_str == NULL)
	return (NULL);

	for (len = 0; str[len]; len++);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;
	temp->next = new_node;
	}
return (new_node);
}
