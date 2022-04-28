# WHAT EACH PROGRAM DOES

## Basic Programs

### 0-puts_recursion.c
This program contains a function `puts_recursion` which takes a `char *` string `s` as an argument and uses recursion to print out all the characters in the string to the screen followed by a newline. In order to use this program:

Create the `0-main.c` file and type the following code into it:
<pre>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
</pre> 

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./0-puts_recursion 
Puts with recursion
Chukwuemeka@Ubuntu:~$ 
</pre>

### 1-print_rev_recursion.c
This program contains the function `_print_rev_recursion` which takes a string `s` and prints out the characters of the string to the screen in reverse. In order to use this program:

Create the `1-main.c` file and type the following code into it:
<pre>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./1-print_rev_recursion 
reklaW notloC
Chukwuemeka@Ubuntu:~$ 
</pre>

### 2-strlen_recursion.c
This program contains the function `_strlen_recursion` which takes a string `s` as an argument, computes the length of the string using recursion and the returns that length. In order to use this program:

Create the `2-main.c` file and type the following code into it:
<pre>
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./2-strlen_recursion 
14
Chukwuemeka@Ubuntu:~$ 
</pre>

### 3-factorial.c
This program contains a function `factorial` which takes an integer `n` as an argument and returns the factorial of that number. In order to use this program:

Create the `3-main.c` file and type the following code into it:
<pre>
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}

</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./3-factorial 
1
120
3628800
-1
Chukwuemeka@Ubuntu:$ 
</pre>

### 4-pow_recursion.c
This program contains the function `_pow_recursion` which takes two integer arguments `x` and `y`. Where `x` is the base number and `y` is the exponent that we want to raise the base number to. In order to use this program:

Create the `4-main.c` file and type the following code into it:
<pre>
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./4-pow 
1
1
65536
25
-1
-125
Chukwuemeka@Ubuntu:~$ 
</pre>

















