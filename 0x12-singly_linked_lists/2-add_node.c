#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: a pointer
 * @str: string to be duplicate
 * Return: the address of a new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_l;
	size_t q;

	new_l = malloc(sizeof(list_t));
	if (new_l == NULL)
	{
		return (NULL);
	}
	(*new_l).str = strdup(str);

	for (q = 0; str[q]; q++)

	(*new_l).len = q;
	(*new_l).next = *head;
	*head = new_l;

	return (*head);
}
