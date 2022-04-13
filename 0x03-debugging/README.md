# WHAT I DID IN EACH OF THE PROGRAMS

### 0-main.c 
This is a program that is mean't to test if the function `positive_or_negative(int i)` already defined earlier works as expected. It runs the code and provides the function with test parameters in order to ascertain that it works as intended. In order to use it to test the function: 
**Use It With The Compiled Function:**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
Chukwuemeka@Ubuntu:~$ ./0-main
0 is zero
Chukwuemeka@Ubuntu:~$ wc -l 0-main.c
16 0-main.c
Chukwuemeka@Ubuntu:~$ _
</pre>

### 1-main.c
This is a program that originally compiled and produced a function that is designed to create an infinite loop. On commenting out some of the lines of code in the file, the infinite loop has been avoided. In order to check this program out: 
**Compile It**
<pre>
Chukwuemeka@Ubuntu:~$ gcc -std=gnu89 1-main.c -o 1-main
</pre>

**Run It**
<pre>
Chukwuemeka@Ubuntu:~$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
Chukwuemeka@Ubuntu:~$ wc -l 1-main.c
24 1-main.c
Chukwuemeka@Ubuntu:~$ _
</pre>
