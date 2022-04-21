# WHAT EACH PROGRAM DOES

## Basic Scripts

### 0-reset_to_98.c
This program contains a function which when compiled and run takes a pointer to integer variable as it's argument and uses that pointer to reset the value of the integer variable to `98` from within the function. In order to use this program:

Create the `0-main.c` file and type the code below into it:
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

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./0-98 
n=402
n=98
Chukwuemeka@Ubuntu:~$ 
</pre>

### 1-swap.c
This program contains a function `swap_int` which when compiled and run will take two pointers to integers `a` and `b` and swap the value of the variables to which they point from within the function. In order to use this program:

Create the `1-main.c` file and type the code below into it:
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
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./1-swap 
a=98, b=42
a=42, b=98
Chukwuemeka@Ubuntu:~$ 
</pre>


### 2-strlen.c
This program contains a function `_strlen` which when Compiled and run, will take a string `s` as argument and returns the length of the string as an integer value. In order to use it:

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
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
</pre>	

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./2-strlen 
16
Chukwuemeka@Ubuntu:~$ 
</pre>


### 3-puts.c
This program contains a function `_puts` which takes a string as argument and prints the string out to the screen on call. In order to use it:

Create the `3-main.c` and type:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
Chukwuemeka@Ubuntu:~$ 
</pre>


### 4-print_rev.c
This program contains a function `print_rev` which takes a string as an argument and prints that string out to the screen in reverse. In order to use it:

Create the `4-main.c` file and type:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
Chukwuemeka@Ubuntu: 
</pre>

### 5-rev_string.c
This program contains the function `rev_string` which takes a string as an argument and then reverses the characters in the string. In order to use It:

Create the `5-main.c` file and type the following code:
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
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./5-rev_string 
My School
loohcS yM
Chukwuemeka@Ubuntu:~$ 
</pre>

### 6-puts2.c
This program contains the function `puts2` which takes a string as an argument and prints out every odd numbered character to the screen while omitting even numbered characters from the numbers displayed. In order to use it:

Create the `6-main.c` file and type the following code into it:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./6-puts2 
02468
Chukwuemeka@Ubuntu:~$ 
</pre>

### 7-puts_half.c
This program contains a function `puts_half` which takes a string `str` as an argument and prints the second half of it to the screen. In order to use it:

Create the `7-main.c` file and type the followuing code into it:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
</pre>	

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./7-puts_half 
56789
Chukwuemeka@Ubuntu:~$ 
</pre>

### 8-print_array.c
This program contains a function `print_array` that takes two arguments, an array and the size of the array to be printed to the screen. In order to use it:

Create the `8-main.c` and type the following code:
<pre>
 #include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./8-print_array 
98, 402, -198, 298, -1024
Chukwuemeka@Ubuntu:~$ 
</pre>

### 9-strcpy.c
This program contains a function `_strcpy` which takes two strings `dest` and `src` as arguments and copies the contents of `src` into `dest` and then returns the address of `dest` back to the user of the program. In order to use it:

Create the `9-main.c` and type the following code:
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
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
Chukwuemeka@Ubuntu:~$ 
</pre>

## Advanced Programs


### 100-atoi.c
This program contains a function `_atoi` which takes a string, parses out the non-digit characters from the string and then returns an integer containing all the digit characters back to the user of the function. In order to use this program:

Create the `100-main.c` file and type the following code into it:
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
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
Chukwuemeka@Ubuntu:~$ 
<pre>







