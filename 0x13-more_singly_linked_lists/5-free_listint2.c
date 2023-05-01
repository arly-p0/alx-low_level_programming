#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a list and sets head to NULL
 * @head: pointer to a pointer to be used in the list
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptrs;

	if (head == NULL || *head == NULL)

		return;

	while (*head != NULL)
	{
		ptrs = *head;
		*head = (*head)->next;
		free(ptrs);
	}
}
