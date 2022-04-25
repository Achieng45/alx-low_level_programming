#ifndef _LISTS_
#define _LISTS_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
 typedef struct listint_s
 {
     char *str;
     unsigned int len;
     struct listint_s *next
 }listint_t;

void free_listint(listint_t *head);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
void free_listint(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);
