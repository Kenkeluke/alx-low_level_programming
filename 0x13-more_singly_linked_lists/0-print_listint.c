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
const listint_t* node = (listint_t *)malloc(sizeof(listint_t));
node = h;
if(node == NULL) printf(NULL);

/*bringing in the loop*/
while (node != NULL)
{
num_nodes++;        
node =  node->next;
}
return(num_nodes);

}