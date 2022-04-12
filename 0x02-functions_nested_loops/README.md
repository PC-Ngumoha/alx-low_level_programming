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





















