#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *add;
    size_t nchar;
    
    add=malloc(sizeof(listint_t))
    if(add==NULL)
        return(NULL);
     else
        return **add;
     add->str=strdup(str);
     for(nchar=0;str[nchar];nchar++);
     add->len=nchar;
     add->next=*head;
     return(*head);
    
}
