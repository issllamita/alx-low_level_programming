#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: pointer to the head node
  * @index: index of the node to be returned
  * Return: pointer ti the nth node of the list, or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *curr;

	if (!head)
		return (NULL);
	curr = head;
	for (i = 0; i < index; i++)
	{
		if (curr)
			curr = curr->next;
		else
			return (NULL);
	}
	return (curr);
}
