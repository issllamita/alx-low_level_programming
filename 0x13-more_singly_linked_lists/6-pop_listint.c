#include "lists.h"
/**
  * pop_listint -  that deletes the head node of a listint_t linked list
  * @head: double pointer to head node
  * Return: the head node's data, or 0 if linked list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
