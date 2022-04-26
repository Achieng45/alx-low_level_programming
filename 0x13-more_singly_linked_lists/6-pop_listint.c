#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *curr,*h;
	if(*head==NULL)
		return(NULL);
	cur=*head;
	hnode=cur->n;
	h=curr->next;
	
	free(curr);
	h=*head;
	return(hnode);

}


