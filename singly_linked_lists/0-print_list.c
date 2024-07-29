#include "list.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list: print list of all node
 * and value of all node
 * @len: value of node
 * Return: value of node
 */
size_t print_list(const list_t *h)
{
	list_s *actual = list_t->str;

	while (actuel != NULL)
	{
		printf("[%d] ", len, actual);
		actual = actuel->next;
	}
	printf("[0] (nil)");
	return (len);
}