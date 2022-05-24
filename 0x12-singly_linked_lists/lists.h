#ifndef LISTS_H_
#define LISTS_H_

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

#endif /* LISTS_H_ */
