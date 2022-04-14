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

### 1-isdigit.c
This program contains the user-defined function `_isdigit` which takes a single character `c` and determines if the character is a digit or not. In order to make use of this program:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
</pre> 

open the `1-main.c` file and type in the following code in order to test the function:
<pre>
 #include "main.h"
 #include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./1-isdigit
0: 1
a: 0
Chukwuemeka@Ubuntu:~$ _
</pre>


### 2-mul.c
This program contains the user-defined function `mul` which takes in two integers as arguments and then calculates and returns the product of the two integers passed. In order to use this program:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
</pre>

open up the `2-main.c` and type the following code into it, to test the function:
<pre>
 #include "main.h"
 #include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./2-mul
100352
-1646592
Chukwuemeka@Ubuntu:~$ _
</pre>

### 3-print_numbers.c
This program contains the user-defined function `print_numbers` which prints out numbers from `0` to `9` to the terminal. In order to use it:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
</pre>

open up the `3-main.c` file and enter the following code in order to test the function:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./3-print_numbers | cat -e
0123456789$
Chukwuemeka@Ubuntu:~$ _
</pre>















