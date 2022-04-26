#include<stdio.h>
void free_listint2(listint_t **head)
{
	list_int=*current;
	while((*head=current)!=NULL)
	{
		
		curent=current->next;
		free(current);

	}
	*head=NULL
