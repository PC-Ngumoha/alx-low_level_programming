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



















