#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>


size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);




#endif
