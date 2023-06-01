#include "lists.h"
#include <string.h>
/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: double pointer to the head node
  * @str: pointer to a string
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *curr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
	return (new);
}

