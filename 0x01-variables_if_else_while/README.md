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

