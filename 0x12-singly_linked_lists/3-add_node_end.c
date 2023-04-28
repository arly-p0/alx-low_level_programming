#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function that adds new node at the end of a list_t list
 * @head: a pointer
 * @str: string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_l, *ptrs;
	size_t k;

	new_l = malloc(sizeof(list_t));
	if (new_l == NULL)
	{
		return (NULL);
	}
	(*new_l).str = strdup(str);

	for (k = 0; str[k]; k++)
		;
		(*new_l).len = k;
		(*new_l).next = NULL;
		ptrs = *head;
	if (ptrs == NULL)
	{
		*head = new_l;
	}
	else
	{
		while ((*ptrs).next != NULL)
			ptrs = (*ptrs).next;
		(*ptrs).next = new_l;
	}
	return (*head);
}
