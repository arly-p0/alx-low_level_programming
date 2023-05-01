#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to the head of the list
 * @index: the index of the node
 *
 * Return: nth node a linked list, if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q;
	listint_t *ptr;

	ptr = head;
	for (q = 0; q < index && ptr != NULL; q++)
	{
		ptr = (*ptr).next;
	}
	return (ptr);
}
