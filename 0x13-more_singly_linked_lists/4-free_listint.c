#include "lists.h"
void free_listint(listint_t *head)
{
    listint_t *current;
    while((current=head)!=NULL)
    {   
	current=*head;
        head=head->next;
        free(current);
    }
}
