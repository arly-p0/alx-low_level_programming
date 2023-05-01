#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: a pointer to be used in the list
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *ptrs;

	ptrs = head;
	while (head == NULL)
	{
		head = (*head).next;
		free(ptrs);
	}
}
