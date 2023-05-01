#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: pointer a pointer to the head of the list
 *
 * Return: the head node's data (n), if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int z;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	ptr = *head;
	*head = ptr->next;
	z = ptr->n;
	free(ptr);

	return (z);
}
