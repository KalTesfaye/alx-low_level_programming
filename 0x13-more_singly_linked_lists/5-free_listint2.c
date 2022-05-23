#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		freed = *head;
		*head = (*(head))->next;
		free(freed);
	}
	*head = NULL;
}

