#include "lists.h"
size_t print_listint(const listint_t *h)
{
    size_t nodel;
    nodel=0;
    while(h!=NULL)
    {
        if(h->str==NULL)
            printf("[%d]%s",0,"(nil)");
        else
            printf("[%d]%s",0,"(nil)"h->len,h->str);
        h=h->next;
        nodel++;


    }
    return(nodel);

}

