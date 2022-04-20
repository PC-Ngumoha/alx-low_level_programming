# WHAT EACH PROGRAM DOES

## Basic Scripts

### 0-reset_to_98.c
This program contains a function which when compiled and run takes a pointer to integer variable as it's argument and uses that pointer to reset the value of the integer variable to `98` from within the function. In order to use this program:

Create the `0-main.c` file and type the code below into it:
<pre>
 #include "main.h"
 #include \<stdio.h\>

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
Chukwuemeka@Ubuntu:~$ _
</pre>



