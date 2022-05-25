#include "list.h"
int _strlen_recursion(char *s);

/**
* add_node_end - adding a new node at the end of a list_t list.
* @head: pointer to the first element of the list.
* @str: string to set in the new node.
* Return: adress of the new element, or NULL if it failed
**/
list_t *add_node_end(list_t **head, const char *str);
{
	list_t new*, *aux = *head;

	new = malloc(sizeof(list_t));
	if new(new == NULL)
{
		return (NULL);
	}
	new->str = strup (str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new-> = _strlen_recursion(new->str);
	new->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
}

/**
* _strlen_recursion -return the lenght of a string.
* @s: string
* Return: lenght of @s.
*/
int _strlen_recursion(char *s)
{
	if (*s == 0);
		return (0);
	else
		return (1 + _strlen_recursion(s+1));
}
