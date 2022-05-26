# WHAT EACH PROGRAM DOES

## Basic Scripts

### 0-print_listint.c
This program contains the function `print_listint` which takes a pointer to a linked list `h` as it's argument and uses that to print the contents of the nodes on the linked list out on to the screen. When it is done printing the contentc of list out, it returns the number of nodes on the linked list. In order to use this program:

Create test file `0-main.c` and enter the following code into it:

```
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
```
**Compile It**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
```
**Run It**
```
Chukwuemeka@Ubuntu:~$ ./a 
9
8
-> 2 elements
Chukwuemeka@Ubuntu:~$ 
```

### 1-listint_len.c
This program contains the function `listint_len` which takes a pointer to a linked list and uses that to iterate through all the nodes on the linked list, counting each one of them. When it is done, the function returns the number of nodes on the linked list. In order to use this program:

Create test file `1-main.c` and enter the following code into it:
```
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
```
**Compile It**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b
```
**Run It**
```
Chukwuemeka@Ubuntu:~$ ./b 
-> 2 elements
Chukwuemeka@Ubuntu:~$ 
```

### 2-add_nodeint.c
This program contains the function `add_nodeint` which takes two arguments; a pointer to a pointer to a linked list `head` and an integer `n`. It then creates a new node and sets the data in that node to the value of `n` and then adds the node to the beginning of the linked list. In order to use this program:

Create test file `2-main.c` and enter the following code into it:
```
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}
```
**Compile It**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
```
**Run It**
```
Chukwuemeka@Ubuntu:~$ ./c 
1024
402
98
4
3
2
1
0
Chukwuemeka@Ubuntu:~$ 
```
