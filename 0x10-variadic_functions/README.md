# WHAT EACH PROGRAM DOES

### 0-sum_them_all.c
This program contains a function `sum_them_all` which takes an unsigned int argument `n` which serves as a count and an indefinite number of optional arguments denoted by `...`. When the program is compiled and run, it sums up `n` numbers of the optional arguments to the function and then returns the sum. In order to use this program:

Create test file `0-main.c` and enter the following code :
```
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
``` 
**Compile It**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
```
**Run It**
```
Chukwuemeka@Ubuntu:~$ ./a 
1122
500
Chukwuemeka@Ubuntu:~$ 
```
### 1-print_numbers.c
This program contains a function `print_numbers` which takes a string `seperator`, an integer `n` and an indefinite list of optional arguments denoted by `...`. In prints out the values of `n` number of the optional arguments. In order to use this program:

Create test file `1-main.c` and type the following into it:
```
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
```
**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./b
0, 98, -1024, 402
Chukwuemeka@Ubuntu:~$ 
```


### 2-print_strings.c
This program contains the functions `print_strings` which takes a string `seperator`, an integer `n` and an unlimited number of optional arguments denoted by `...`. When the program is compiled and run, it prints out the strings to the screen. In order to use this program:

Create test file `2-main.c` and enter the following code:
```
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
```
**Compile It**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
```
**Run It**
```
Chukwuemeka@Ubuntu:~$ ./c 
Jay, Django
Chukwuemeka@Ubuntu:~$ 
```

### 3-print_all.c
This program contains the function `print_all` which takes a const string `format` and an indefinite number of optional values as it's arguments. When compiled and run, this function uses the pattern specified in the format in order to determine the type and number of arguments to print to the screen. In order to use this program:

Create test file `3-main.c` and type the following code into it:
```
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
```
**Compile It**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
```
**Run It**
```
Chukwuemeka@Ubuntu:~$ ./d 
B, 3, stSchool
Chukwuemeka@Ubuntu:~$ 
```











