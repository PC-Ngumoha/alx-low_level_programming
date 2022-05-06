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
### 3-alloc_grid.c
This program contains the function `alloc_grid` which when compiled and run will take two integer arguments `width` and `height` and create a 2D grid of height `height` and width `width`. Then it returns a pointer to the grid's location in memory. In order to use this program:

Create test file `3-main.c` and type the following code into it:
```
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
```

**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o g
```

**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./g
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
Chukwuemeka@Ubuntu:~$ 
```
### 4-free_grid.c
This program contains the function `free_grid` which takes a arguments; a pointer to a 2D dynamically-allocated array `grid` and an integer. When compiled and run, this function frees up the memory occupied by any grid `grid` with height `height`. In order to use this program:

Create test file `4-main.c` and type in the following code:
```
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
```

**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o f
```
**TEST IT WITH VALGRIND**
```
Chukwuemeka@Ubuntu:~$ valgrind ./f
==5013== Memcheck, a memory error detector
==5013== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5013== Command: ./f
==5013== 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
==5013== 
==5013== HEAP SUMMARY:
==5013==     in use at exit: 0 bytes in 0 blocks
==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
==5013== 
==5013== All heap blocks were freed -- no leaks are possible
==5013== 
==5013== For counts of detected and suppressed errors, rerun with: -v
==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
Chukwuemeka@Ubuntu:~$ 
```

## Advanced Program

### 100-argstostr.c
This program contains the function `argstostr` which takes two arguments; an integer argument `ac` which represents the count of command line arguments passed to the program and an array of strings `av` which is the vector holding all the command line arguments passed into to the program during runtime. When this program is compiled and run with command line arguments, all the command line arguments are concatenated into a single string and returned by the function. In order to use this program: 
Create test file `100-main.c` and type the following code into it:
```
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
```
**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./args I will "show you" how great I am
./args
I
will
show you
how
great
I
am
Chukwuemeka@Ubuntu:~$ 
```




























