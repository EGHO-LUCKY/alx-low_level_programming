#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer to the head of the linked list
 * @index: the index of the node to be deleted
 * Return: 1 for success, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *nxt, *prev;
	unsigned int i = 0;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (; tmp != NULL && i < index; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	prev = tmp->prev;
	nxt = tmp->next;
	prev->next = nxt;
	if (nxt != NULL)
		nxt->prev = prev;
	free(tmp);
	return (1);
}
