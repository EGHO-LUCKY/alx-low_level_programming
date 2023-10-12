#include "lists.h"
/**
 * sum_dlistint - sums up all the value of the nodes in a
 * doubly linked list
 * @head: a pointer to the head of the list
 * Return: 0 if it fails or the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
