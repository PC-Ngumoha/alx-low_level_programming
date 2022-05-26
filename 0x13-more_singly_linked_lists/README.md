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
```



## Advanced Scripts
