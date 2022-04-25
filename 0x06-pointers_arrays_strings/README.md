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

### 4-rev_array.c
This program contains the function `reverse_array` which takes a pointer to the array `*a` and the number of elements `n` as arguments and uses that to reverse the contents of the array pointed to by `a`. In order to use this program:

Create the `4-main.c` file and type the following code into it:
<pre>
 #include "main.h"
 #include &lt;stdio.h&gt;

/**
 * print_array - prints out the contents of the array to the screen
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./4-rev_array 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
Chukwuemeka@Ubuntu:~$ 
</pre>

### 5-string_toupper.c
This program contains the function `string_toupper` which takes a string `str` as argument, converts all the lowercase characters in the string to uppercase and then returns the modified string. In order to use this program:

Create the `5-main.c` file and type the following code into it:
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
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./5-string_toupper 
LOOK UP!
LOOK UP!
Chukwuemeka@Ubuntu:~$ 
</pre>

### 6-cap_string.c
This program contains the function `cap_string` which takes a string `str` and Capitalizes every individual word within the string. In order to use this function:

Create the `6-main.c` file and type the following code into it:
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
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Chukwuemeka@Ubuntu:~$ 
</pre>

### 7-leet.c
This program contains a function `leet` which takes a string `str` as argument and encodes the string into `1337` format by replacing every occurence of `a` and `A` with `4`, `e` and `E` with `3`, `o` and `O` with `0`, `t` and `T` with `7`, and `l` and `L` with `1`. In order to use this program:

Create the `7-main.c` file and type the following code into it:
<pre>
 #include "main.h"
 #include &lt;stdio.h&gt;

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./7-1337 
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
Chukwuemeka@Ubuntu:~$ 
</pre>

## Advanced Programs

### 100-rot13.c
This program contains the function `rot13` which takes a string as an argument, encodes the characters  in the string using the ROT-13 encoding technique which is a special type of encoding technique which is based on the caesar-cipher method of shifting characters `n` spaces forward in the alphabet (rolling over if necessary). In order to use this script:

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
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
</pre> 

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-rot13.c -o 100-rot13
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./100-rot13 
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
-----------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
Chukwuemeka@Ubuntu:~$ 
</pre>

### 101-print_number.c
This program contains a function `print_number` which when compiled and run takes an integer (Four digits max) as an argument and prints that integer to the screen. I didn't make this version robust enough to print out integers of any number of digits. In order to use this program:

Create the `101-main.c` file and type the following code into it:
<pre>
 #include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
</pre>

**Compile It:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
</pre>

**Run It:**
<pre>
Chukwuemeka@Ubuntu:~$ ./101-print_numbers 
98
402
1024
0
-98
Chukwuemeka@Ubuntu:~$ 
</pre>


























