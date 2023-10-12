#include "lists.h"
/**
 * free_dlistint - frees up a dlistint_t list
 * @head: a pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	if (head != NULL)
	{
		while (head != NULL)
		{
			h = head;
			head = head->next;
			free(h);
		}
	}
}
