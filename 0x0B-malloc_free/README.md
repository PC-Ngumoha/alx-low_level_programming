# WHAT EACH PROGRAM DOES

## Basic Programs

### 0-create_array.c
This program contains the function `create_array` which when compiled and run will take two arguments `size` and `c` and dynamically creates an array of size `size` elements and set all the elements to the value of `c`. In order to use this program:

Create the test file `0-main.c` and type the following code into it:
```
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
```
**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./a 
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
Chukwuemeka@Ubuntu:~$ 
```
### 1-strdup.c
This is a program which contains the function `_strdup` which takes a string `str` as an argument and copies the content of that string from it's memory location to another location in memory. In order to use the program:

Create test file `1-main.c` and type the followuing code into it:
```
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("Holberton");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
```

**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
```

**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./s 
Holberton
Chukwuemeka@Ubuntu:~$ 
```
### 2-str_concat.c
This program contains the function `str_concat` which when compiled and run will take two strings `s1` and `s2` as it's arguments and concatenate the two of them. Then it will return the concatenated string. In order to use this program:

Create test file `2-main.c` and type the following code into it:
```
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
```
**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./c | cat -e
Betty Holberton$
Chukwuemeka@Ubuntu:~$ 
```




























