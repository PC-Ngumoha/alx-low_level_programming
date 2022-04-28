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
