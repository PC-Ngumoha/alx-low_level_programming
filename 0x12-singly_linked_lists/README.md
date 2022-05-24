# WHAT EACH PROGRAM DOES

## Basic Programs

### 0-print_list
This file contains the function `print_list` which takes a pointer to the first node on the linked list and then uses that to print out the contents of the linked list to the screen. In order to use this program:

Create test file `0-main.c` and enter the following code into it:
```
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
```
**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
``` 
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
Chukwuemeka@Ubuntu:~$ 
```

