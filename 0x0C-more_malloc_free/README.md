# WHAT EACH PROGRAM DOES

## Basic Programs

### 0-malloc_checked
This program contains a functions `malloc_checked` which when compiled and run takes an integer argument `b` which it uses with the standard library function `malloc` in order to dynamically allocate `b` blocks of memory. In order to use this program:

Create test file `0-main.c` and type the following code into it:

```
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
```

**Compile It:**

```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
```

**Run It:**

```
Chukwuemeka@Ubuntu:~$ ./a 
0x1e39010
0x1e39830
0x7f31f6c19010
Chukwuemeka@Ubuntu:~$ echo $?
98
Chukwuemeka@Ubuntu:~$ 
```

### 1-string_nconcat.c
This program contains the function `string_nconcat` which, when compiled and run, takes two string arguments `s1` and `s2` and one integer argument `n` and the concatenates `n` bytes from `s2` to `s1` and then returns the newly formed string. In order to use this program:

Create test file `1-main.c` and type the following code:

```
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
```

**Compile It:**

```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat
```

**Run It:**

```
Chukwuemeka@Ubuntu:~$ ./1-string_nconcat
Best School
Chukwuemeka@Ubuntu:~$ 
```

### 2-calloc.c
This program contains the function `_calloc` which, when compiled and run, takes two integer arguments `nmemb` and `size` and dynamically creates an array contained `nmemb` elements of `size` bytes each. In order to use this program:

Create test file `2-main.c` and type the following code:

```
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
```

**Compile It:**

```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o 2-calloc
```

**Run It:**

```
Chukwuemeka@Ubuntu:~$ ./2-calloc
0x42 0x65 0x73 0x74 0x20 0x53 0x63 0x68 0x6f 0x6f
0x6c 0x21 0x20 0x3a 0x29 0x0a 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
Chukwuemeka@Ubuntu:~$ 
```























