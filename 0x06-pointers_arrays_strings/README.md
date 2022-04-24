# WHAT EACH PROGRAM DOES

## Basic Programs

### 0-strcat.c
This program contains the function `_strcat` which takes two strings as arguments and then concatenates the contents of the second with the first, adds the null character to the end of the resulting string and then returns the resulting string. In order to use this program:

Create the `0-main.c` and type the following code into it:
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
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
Chukwuemeka@Ubuntu:~$ 
</pre>

### 1-strncat.c
This program contains a function `strncat` which when compiled and run will take two strings `dest` and `src` and an integer `n` as argument and will concatenate `n` number of characters from the `src` string argument to the `dest` string argument. In order to use this program:

Create the `1-main.c` file and type the following code into it:
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
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
Chukwuemeka@Ubuntu:~$ 
</pre>

### 2-strncpy.c
This program contains the function `strncpy` which takes two string arguments `dest` and `src` and an integer argument `n` and copies at most `n` number of characters from the `src` to the `dest` string argument. If `n` is greater than the length of the string to copy, then the function copies everything until it encounters an end of string or `\0` character. If not it copies at most `n` characters from the string `src` to the string `dest`. In order to use this program:

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
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
Chukwuemeka@Ubuntu:~$ 
</pre>

### 3-strcmp.c
This program contains the function `_strcmp` which takes two strings `s1` and `s2` and compares the two strings character by character to determine if they are equal to each other or if one of them is greater than or less than the other. If both are a match, the function returns `0`. If one of them is greater than or less than the other, the function returns the difference `s1 - s2` which may result in a negative or a positive value depending on the respective magnitudes of `s1` and `s2`. In order to use the program:

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
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./3-strcmp
-15
15
0
Chukwuemeka@Ubuntu:~$ 
</pre>















