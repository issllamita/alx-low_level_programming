#include "lists.h"
/**
  * insert_nodeint_at_index - nserts a new node at a given position
  * @head: double pointer to the head node
  * @idx: index of the list
  * @n: data for the new node
  * Return: the address of the new node, or NULL (failed)
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	curr = *head;
	for (i = 0; i < idx - 1 && curr != NULL; i++)
		curr = curr->next;
	if (i != idx - 1 || curr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}
