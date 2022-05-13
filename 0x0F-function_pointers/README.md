# WHAT EACH PROGRAM DOES

## Basic Programs

### 0-print_name.c
This program contains a function `print_name` which takes two arguments: a string `name` and a pointer to a function which takes a string argument and returns nothing `f`. When the program is compiled and run, the function takes in the arguments and, through the use of the pointer, calls the function pointed and uses that function to print the name stored in the string `name` to the screen. In order to use this program:

Create test file `0-main.c` and type the following code into it:
```
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
```
**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./a 
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
Chukwuemeka@Ubuntu:~$ 
```

### 1-array_iterator.c
This program contains a function `array_iterator` which takes three arguments: an array `array`, and unsigned int `size` and a pointer to a function that takes an int argument and returns nothing. When the program is compiled and run, the function pointed to by the pointer to function is called iteratively on every element in the array. In order to use this program:

Create test file `1-main.c` and type the following code into it:
```
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
```
**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
Chukwuemeka@Ubuntu:~$ 
```
























