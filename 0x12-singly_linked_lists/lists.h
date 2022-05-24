#ifndef LISTS_H_
#define LISTS_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function Declarations */
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LISTS_H_ */
