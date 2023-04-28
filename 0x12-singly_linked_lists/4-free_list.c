#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - a function that frees a list_t list
 * @head: a pointer
 *
 * Return: 0 Always.
 */
void free_list(list_t *head)
{
	list_t *ptrs;

	ptrs = head;
	while ((ptrs = head) != NULL)
	{
		head = (*head).next;
		free((*ptrs).str);
		free(ptrs);
	}
}
