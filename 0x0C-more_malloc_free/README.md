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























