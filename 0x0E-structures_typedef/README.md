# WHAT EACH PROGRAM DOES

### dog.h
This header contains the definition of the `dog` struct which we use to represent a dog in our code. The struct has three members: A string to store the name of the dog `name`, A floating point number type to store the age of the dog `age` and A string to store the name of the dog's owner `owner`.

### 1-init_dog.c
This programs contains a function `init_dog` which, when compiled and run, takes four arguments: A pointer to struct dog `d`; A string for the dog's name `name`; A floating point number for the dog's age `age`; A string for the dog's owner's name `owner`. Then it uses all these arguments to initialize the instance of struct dog pointed to by `d`.

### 2-print_dog.c
This program contains a function `print_dog` which, when compiled and run, takes a single argument: A pointer to a struct `d`. And then it prints out the content of the struct to the screen using the following format:
<pre>
Name: name of dog
Age: age of dog
Owner: name of dog's owner
</pre>

### 4-new_dog
This program contains a function `new_dog` which, when compiled and run, takes three arguments: A string `name`; A floating point number `age`; A string `owner`. And then it creates a new instance of struct `dog` and returns a pointer to that instance. In order to use this program:

Create the test file `4-main.c` and type the following into it:

```
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```

**Compile It:**

```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
Chukwuemeka@Ubuntu:~$ 
```


### 5-free_dog
This program contains the function `free_dog` which takes an argument: A pointer to a struct `d`. And frees all the memory dynamically allocated to that struct. In order to use this program:

Create test file `5-main.c` and type following code into it:
```
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
```
**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
```
**Test For Leaks With Valgrind:**
```
Chukwuemeka@Ubuntu:~$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
Chukwuemeka@Ubuntu:~$ 
```

 
