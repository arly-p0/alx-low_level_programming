#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: a pointer to be used in the list
 *
 * Return: the sum of all the data (n), returns 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head == NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
