#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - function that add at the end of a list
 * @head: pointer to a pointer to be used in the list
 * @n: an integer to be used in the new list
 *
 * Return: the address of the new element, NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_ptrs;
	listint_t *ptrs;

	node_ptrs = malloc(sizeof(listint_t));

	if (node_ptrs == NULL)
	{
		return (NULL);
	}
	(*node_ptrs).next = NULL;
	(*node_ptrs).n = n;
	ptrs = *head;

	if (*head == NULL)
	{
		*head = node_ptrs;
	}
	else
	{
		ptrs = *head;

		while ((*ptrs).next != NULL)
		{
			ptrs = (*ptrs).next;
		}
		(*ptrs).next = node_ptrs;
	}
	return (node_ptrs);
}
