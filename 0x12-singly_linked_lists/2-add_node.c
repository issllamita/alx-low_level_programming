#include "lists.h"
#include <string.h>
/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: double pointer to the head node
  * @str: string to be added to the new node
  * Return: the address of the new element, othewise NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head || !str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
