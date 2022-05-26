#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function declarations */
int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif /* LISTS_H_ */
