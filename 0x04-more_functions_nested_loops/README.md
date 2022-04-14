# WHAT EACH PROGRAM DOES

## Basic Scripts

### 0-isupper.c
This program contains the user-defined function `_isupper` which takes a character as it's argument (Actually, it takes the underlying ASCII code representation of that character) and determines if that character is an uppercase character. In order to compile and run this code:

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

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
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

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
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

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
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

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./3-print_numbers | cat -e
0123456789$
Chukwuemeka@Ubuntu:~$ _
</pre>

### 4-print_most_numbers
This program contains the user-defined function `print_most_numbers` which prints numbers from `0` to `9` excluding `2` and `4` to the terminal. In order to use this:

open the `4-main.c` file and type the following code into it in order to test the function:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./4-print_most_numbers
01356789
Chukwuemeka@Ubuntu:~$ _
</pre>

### 5-more_numbers.c
This program contains the user-defined function `more_numbers` which prints numbers from `0` to `14` to the terminal ten times. In order to use this program:

open up your `5-main.c` file and type in the following code to test the function:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./5-more_numbers
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
Chukwuemeka@Ubuntu:~$ _
</pre>

### 6-print_line.c
This program contains the user-defined function `print_line` which takes an integer `n` and uses the '_' character to print a line on the screen. Essentially, `n` tells the function the number of times to repeatedly print '_' to the screen. In order to use this program:

Open the `6-main.c` file and type the following code into it in order to test the function:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./6-lines | cat -e
$
__$
__________$
$
Chukwuemeka@Ubuntu:~$ _
</pre>

### 7-print_diagonal.c
This program contains the user-defined function `print_diagonal` which takes an integer number `n` and then uses that integer to determine how many times the character `\` will be repeated. In order to use it:


Open the `7-main.c` file and type the following into your code:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
Chukwuemeka@Ngumoha:~$ _
</pre>


### 8-print_square.c
This program contains the user-defined function which takes the integer argument `size` and uses it to print out a square to the terminal. If the `size` is zero or less, it just moves the cursor to the next line. In order to use this program:


open up your `8-main.c` file and type the following code into it:
<pre>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./8-squares
 ##
 ##
 ##########
 ##########
 ##########
 ##########
 ##########
 ##########
 ##########
 ##########
 ##########
 ##########

Chukwuemeka@Ubuntu:~$ _
</pre>





