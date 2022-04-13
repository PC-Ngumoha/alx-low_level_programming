# WHAT EACH PROGRAM DOES

## Basic Programs

### 0-putchar.c
When this program is compiled and run, it will print the string `_putchar` to the terminal followed by a newline. It does this by using a user-defined function (_putchar()) to print characters to the standard output. In order to run it:

**Compile It:**

<pre>
Chukwuemeka@Ubuntu:~$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar 
</pre>

**Run It:**

<pre>
Chukwuemeka@Ubuntu:~$ ./0-putchar
_putchar
Chukwuemeka@Ubuntu:~$ _
</pre>

### 1-alphabet.c
When this function is compiled and run, It will print all the letters of the english alphabet in lowercase to the terminal followed by a newline. In order to run this program:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 1-alphabet.c -o 1-alphabet
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./1-alphabet
abcdefghijklmnopqrstuvwxyz
Chukwuemeka@Ubuntu:~$ _
</pre>

### 2-print_alphabet_x10
When this function is compiled and run, It will print all the letters of the english alphabet (in lowercase) to the terminal followed by a newline each time. In order to run this program: 

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./2-alphabet_x10
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
Chukwuemeka@Ubuntu:~$ _
</pre>


### 3-islower.c
When this function is called with a character being passed as an argument, It will determine if the character is a lowercase character or not and return either `1` (if it is a lowercase) or `0` (If it is not a lowercase). In order to use this program:

**Compile It:**

<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 3-islower.c -o 3-islower
</pre>

If you open up your main.c file and input the following code (to test the function):

<pre>
 #include "main.h"

 /**
  * main - check the code.
  *
  * Return: Always 0.
  */
 int main(void)
 {
     int r;

     r = _islower('H');
     _putchar(r + '0');
     r = _islower('o');
     _putchar(r + '0');
     r = _islower(108);
     _putchar(r + '0');
     _putchar('\n');
     return (0);
 }
</pre>
and then:

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./3-islower
011
Chukwuemeka@Ubuntu:~$ _
</pre>


### 4-isalpha.c
When this function is called with a character passed into it as an argument, the function will determine if the character is a letter of the english alphabet. If the character is a letter of the english alphabet, the function returns `1` (true). If not, the function returns `0` (false). In order to use the program:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 4-isalpha.c -o 4-isalpha
</pre>

Open your main.c file and type the following code (in order to test the function)
<pre>
 #include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./4-isalpha
1110
Chukwuemeka@Ubuntu:~$ _
</pre>


### 5-sign.c
When this function is called with an integer number passed to it as an argument, then the function determines the sign of the number and prints it and then returns a code to designate which kind of number. i.e If the number is greater than zero, the function prints `+` and returns `1`. If equal to zero, the functions prints `0` and returns `0`. If less than zero, the functions prints `-` and returns `-1`. In order to use this program:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 5-sign.c -o 5-sign
</pre>

open up the main.c file and type the following code inside it (to test the function):
<pre>
 #include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
</pre>
and then:

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./5-sign
+, 1
0, 0
+, 1
-, /
</pre>

### 6-abs.c
When this function is compiled and run, the function takes a number as it's argument and the function returns the absolute value of the integer that is passed into it as it's parameter. The absolute value for a number `n` is defined for `n > 0` as `n` and `n < 0` as `-n` where `-n` is the sign inversion of the number `n`. In order to use this program:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 6-abs.c -o 6-abs
</pre>

open your main.c file, and type the following code into it (to test the function):
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
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
</pre>
and then :

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./6-abs
1
0
1
98
Chukwuemeka@Ubuntu:~$ _
</pre>

### 7-print_last_digit.c
When the function is compiled and run, the function will take a number `n` as it's argument Then the function will print the last digit of `n` to the terminal and return same. In order to use it:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 7-print_last_digit.c -o 7-last_digit
</pre>

open the main.c file and enter the following code (in order to test the function):
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
</pre>

and then:

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./7-last_digit
8044
Chukwuemeka@Ubuntu:~$ _
</pre>

### 8-24_hours.c
When this program is compiled and run, the function prints jack bauer's minutes for a 24-hour day to the terminal starting from `00:00` and ending at `23:59`. In order to run the code:

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 8-24_hours.c -o 8-24
</pre>

open up the main.c file, and type the following code to test the function:

<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
Chukwuemeka@Ubuntu:~$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
Chukwuemeka@Ubuntu:~$ ./8-24 | wc -l
1440
</pre>


### 9-times_table.c
When this program is compiled and run, it will print a 9x9 multiplication table to the terminal. In order to use this program: 

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 9-times_table.c -o 9-times_table
</pre>

open the main.c file and type in the following code in order to test the function:

<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
Chukwuemeka@Ubuntu:~$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
Chukwuemeka@Ubuntu:~$ _
</pre>


### 10-add.c
When this program is compiled and run, the function will take two integers as arguments and will return the sum of these integers. In order to use this program :

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main.c 10-add.c -o 10-add
</pre>

open your main.c file, and type in the following code in order to test our function:
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
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./10-add
98
Chukwuemeka@Ubuntu:~$ _
</pre>












