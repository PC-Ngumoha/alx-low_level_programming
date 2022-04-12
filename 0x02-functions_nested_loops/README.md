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

