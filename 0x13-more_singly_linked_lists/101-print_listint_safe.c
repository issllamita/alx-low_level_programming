#include "lists.h"
/**
 * free_listp - frees linked list
 * @head: head of list
 * Return: nop return nothind
 */
void free_listp(listp_t **head)
{
	 listp_t *tmp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}
/**
  * print_listint_safe - prints a listint_t linked list
  * @head: head of a list
  * Return: number of the nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	listp_t *hp, *new, *add;

	hp = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = hp;
		hp = new;
		add = hp;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hp);
				return (num);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}
	 free_listp(&hp);
	 return (num);
}
