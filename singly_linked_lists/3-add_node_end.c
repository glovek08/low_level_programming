#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

int _strlen(char *str);

/**
 * add_node_end - adds a new node at the end of a given singly linked list.
 * @head: the head node of the list.
 * @str: the string value for the new node.
 *
 * Return: the address of the new element, 'NULL' on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	if (!head || !str) return (NULL);
	if (!(new_node = (list_t *)malloc(sizeof(list_t)))) return (NULL);
	if (!(new_node->str = strdup(str))) { free(new_node); return (NULL); }
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (!*head) { *head = new_node; return (new_node); }
	temp = *head;
	while (temp->next) temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
/**
 * _strlen - returns the length of a given string.
 * @str: the given string.
 *
 * Return: str's length.
 */
int _strlen(char *str)
{
	int str_len = 0;
	if (!str) { return (0); }
	while (str[str_len]) str_len++;
	return (str_len);
}
