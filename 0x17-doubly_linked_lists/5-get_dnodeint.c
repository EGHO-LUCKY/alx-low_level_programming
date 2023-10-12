#include "lists.h"
/**
 * get_dnodeint_at_index - returns the address of the node at index
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 * Return: the address of the node or NULL if the function fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	do {
		if (head == NULL)
			return (NULL);
		current = head;
		head = head->next;
		i++;
	} while (i <= index);

	return (current);
}
