# WHAT EACH PROGRAM DOES

## Basic Scripts

### 0-isupper.c
This program contains the user-defined function `_isupper` which takes a character as it's argument (Actually, it takes the underlying ASCII code representation of that character) and determines if that character is an uppercase character. In order to compile and run this code:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
</pre>

In the `0-main.c` file, type the following code to test the function
<pre>
 #include "main.h"
 #include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./0-isuper
A: 1
a: 0
Chukwuemeka@Ubuntu:~$ _
</pre>















