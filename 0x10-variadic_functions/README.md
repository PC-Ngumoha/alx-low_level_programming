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
