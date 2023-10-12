#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of a
 * doubly linked list
 * @head: a pointer to the head of the list
 * @n: value to be added
 * Return: a pointer to the address of the new
 * element or 0 if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
		new->prev = h;
	}
	else
	{
		*head = new;
	}

	return (new);
}
