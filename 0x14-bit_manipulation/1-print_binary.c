#include "main.h"
#include <stdio.h>
void print_binary(unsigned long int n)
{
    int func;
    if(n>1)
    {
        print_binary(n/2);
        func=n&2;
     putchar(func);
    }
}
