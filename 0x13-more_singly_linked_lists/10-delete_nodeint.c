#include "lists.h"
/**
  * delete_nodeint_at_index -  deletes the node at index index of a listint_t
  * @head: pointer to the head of list
  * @index: index of the node to delete
  * Return: 1 if succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		 curr = *head;
		 *head = (*head)->next;
		 free(curr);
		 return (1);
	}
	prev = *head;
	curr = (*head)->next;
	for (i = 1; curr != NULL && i < index; i++)
	{
		prev = curr;
		curr = curr->next;
	}
	if (curr == NULL)
		return (-1);
	prev->next = curr->next;
	free(curr);
	return (1);
}
