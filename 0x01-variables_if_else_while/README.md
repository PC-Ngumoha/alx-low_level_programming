# WHAT EACH C PROGRAM DOES

## Basic code files

### 0-positive_or_negative.c
When compiled and run, this program will generate a random number and then determine is the random number is a zero, a positive number or a negative number. In order to compile and run the program, open a terminal:

**Compile it** :
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
</pre>

**Run it** : 
<pre>
Chukwuemeka@Ubuntu:~$ ./0-positive_or_negative
266878567 is positive
Chukwuemeka@Ubuntu:~$ ./0-positive_or_negative
-110456787 is negative
Chukwuemeka@Ubuntu:~$ _ 
</pre>

### 1-last_digit.c
When this program is compiled and run, the program will generate a random number and then from that random number, it will extract the last digit and will determine if the number is "greater than 5", "zero" or "less than 6 and not 0". And then it prints the results to the terminal. In order to use this program:

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-last_digit.c -o 1-last_digit
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./1-last_digit
Last digit of 266878567 is 7 and is greater than 5
Chukwuemeka@Ubuntu:~$ ./1-last_digit
Last digit of -110456787 is -7 and is less than 6 and not 0
Chukwuemeka@Ubuntu:~$ ./1-last_digit
Last digit of 110478200 is 0 and is 0
Chukwuemeka@Ubuntu:~$ _
</pre>

### 2-print_alphabet.c
When this program is compiled and run, it will print all the characters of the english alphabet to the screen and go to a newline. In order to use the program: 

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz
Chukwuemeka@Ubuntu:~$ _
</pre>

### 3-print_alphabets.c
When this program is compiled and run, it will print all the characters of the english alphabet twice. First, with all letters in their lowercase form, then again with all letters in uppercase form. Then it will print a newline. In order to use the program:

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
Chukwuemeka@Ubuntu:~$ _
</pre>

### 4-print_alphabt.c
When this program is compiled and run, it will print all the characters of the english alphabet except `e` and `q` (all lowercase) to the terminal. In order to use it: 

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./4-print_alphabt
abcdfghijklmnoprstuvwxyz
Chukwuemeka@Ubuntu:~$ _
</pre>

### 5-print_numbers.c
When this program is compiled and run, it will print all the numbers of the decimal number system to the terminal and then it will print a newline character. In order to use it: 

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-print_numbers.c -o 5-print_numbers
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./5-print_numbers
0123456789
Chukwuemeka@Ubuntu:~$ _
</pre>

### 6-print_numberz.c
When this program is compiled and run, it will print all the numbers of the decimal number system to the terminal and then it will print a newline character. In order to use it: 

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-print_numberz.c -o 6-print_numberz
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./6-print_numberz
0123456789
Chukwuemeka@Ubuntu:~$ _
</pre>

### 7-print_tebahpla.c

When this program is compiled and run, it will print all the letters of the english alphabet in reverse order to the terminal and then it will print a newline character. In order to use it: 

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
Chukwuemeka@Ubuntu:~$ _
</pre>

### 8-print_base16.c

When this program is compiled and run, it will print all the numbers of the hexadecimal number system in lowercase to the terminal and then it will print a newline. In order to use it: 

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 8-print_base16.c -o 8-print_base16
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./8-print_base16
0123456789abcdef
Chukwuemeka@Ubuntu:~$ _
</pre>

### 9-print_comb.c
When this program is compiled and run, It will print a comma seperated list of all numbers in the decimal number system and then print a newline. In order to use it:

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 9-print_comb.c -o 9-print_comb
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
Chukwuemeka@Ubuntu:~$ _
</pre>



## Advanced Code Files

### 100-print_comb3.c
When this program is compiled and run, it will print out a list of every possible two digit combination of the numbers available in the decimal number system. In order to use it: 

**Compile it** : 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 100-print_comb3.c -o 100-print_comb3
</pre>

**Run it**:   
<pre>
Chukwuemeka@Ubuntu:~$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
Chukwuemeka@Ubuntu:~$ _
</pre>














