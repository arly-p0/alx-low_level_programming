#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 *at index of a linked list
 * @head: pointer to pointer to the end of the list.
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeede, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmps;
	unsigned int q;

	ptr = *head;

	if (ptr == NULL || ((*ptr).next == NULL && index != 0))
	{
		return (-1);
	}
	if (index != 0)
	{
		for (q = 0; q < index - 1 && ptr != NULL; q++)
		{
			ptr = (*ptr).next;
		}
		if (ptr == NULL || (*ptr).next == NULL)
		{
			return (-1);
		}
		tmps = (*ptr).next;
		(*ptr).next = (*tmps).next;
		free(tmps);
	}
	else
	{
		*head = (*head)->next;
		free(ptr);
	}
	return (1);
}
