# WHAT EACH PROGRAM DOES

## Basic Programs

### 0-binary_to_uint.c
This program contains the function `binary_to_uint` which accepts a string `str` as it's parameter and converts the binary number in the string to it's decimal equivalent. If any of the characters of the string do not correspond to the binary numbers `1` or `0` or `str` points to `NULL`, then the function returns `0` and the program ends. Otherwise, it computes the decimal equivalent of the binary number and returns it. In order to use this program:

Create test file `0-main.c` and enter the following code into it:
```
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
```
**Compile**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
``` 
**Run**
```
Chukwuemeka@Ubuntu:~$ ./a 
1
5
0
98
402
Chukwuemeka@Ubuntu:~$ 
```













