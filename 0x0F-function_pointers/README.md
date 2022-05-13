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

























