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

### 3-add_nodeint_end.c
This program contains the function `3-add_nodeint_end` which takes two arguments; a pointer to a pointer to a linked list `head` and an integer parameter `n`. And then it uses these arguments to create a new node and adds that node to the end of the linked list. In order to use the program:

Create test file `3-main.c` and enter the following code into it:
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

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    return (0);
}
```
**Compile It**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
```
**Run It**
```
Chukwuemeka@Ubuntu:~$ ./d 
0
1
2
3
4
98
402
1024
Chukwuemeka@Ubuntu:~$ 
```

### 4-free_listint.c
This program contains the function `free_listint` which takes a pointer to a node on the linked list `head` as its argument. It then uses this in order to free up the memory allocated to the linked list (By freeing up the memory occupied from one node to the other in the linked list). In order to use this program:

Create test file `4-main.c` and enter the following code into it:
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
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}
```
**Compile It**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e
```
**Test It For Memory Leaks With Valgrind**
```
Chukwuemeka@Ubuntu:~$ valgrind ./e 
==3643== Memcheck, a memory error detector
==3643== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3643== Command: ./e
==3643== 
0
1
2
3
4
98
402
1024
==3643== 
==3643== HEAP SUMMARY:
==3643==     in use at exit: 0 bytes in 0 blocks
==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3643== 
==3643== All heap blocks were freed -- no leaks are possible
==3643== 
==3643== For counts of detected and suppressed errors, rerun with: -v
==3643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
Chukwuemeka@Ubuntu:~$ 
```
### 5-free_listint2.c
This program contains the function `free_listint2` which takes a pointer to a pointer to a node on the linked list `head` as it's argument and then uses it to perform the exact same operation as the function in `4-free_listint.c` above performs. In order to use this program:

Create test file `5-main.c` and enter the following code into it:
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
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
```
**Compile It**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
``` 
**Test For Memory Leaks With Valgrind**
```
Chukwuemeka@Ubuntu:~$ valgrind ./f 
==3843== Memcheck, a memory error detector
==3843== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3843== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3843== Command: ./f
==3843== 
0
1
2
3
4
98
402
1024
(nil)
==3843== 
==3843== HEAP SUMMARY:
==3843==     in use at exit: 0 bytes in 0 blocks
==3843==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3843== 
==3843== All heap blocks were freed -- no leaks are possible
==3843== 
==3843== For counts of detected and suppressed errors, rerun with: -v
==3843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
Chukwuemeka@Ubuntu:~$ 
```




