#include "lists.h"

/**
 * print_listint - prints elements of a list
 * Description: This function uses a for loop
 * to print the elements of a list
 * @h: pointer to the head of the list
 *
 * Return: an unsigned integer, the number of
 * nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;
/*bringing in the loop*/
while (h != NULL)
{
num_nodes++;
printf("%u\n", h->n);
h =  h->next;
}
return (num_nodes);

}
