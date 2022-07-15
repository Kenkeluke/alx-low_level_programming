#include "lists.h"

/**
 *add_node - Adds a new node at the beginning of the element
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *result;
list_t *new_node = malloc(sizeof(size_t));
new_node -> str = strdup(str);
new_node -> next = NULL;
new_node -> next = head;
head = new_node;

if (new_node == NULL) result = NULL;
else result = head;
 




    return(result);
}