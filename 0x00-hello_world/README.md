# WHAT DOES THE PROGRAM DO?

## Basic Scripts

### 0-preprocessor
This script will on execution, execute the preprocessor on the C file whose name is saved in the `$CFILE` and save the results of the call into the `c` output file. In order to use this code, type:
<pre>
Chukwuemeka@Ubuntu:~$ export CFILE=main.c
Chukwuemeka@Ubuntu:~$ ./0-preprocessor
Chukwuemeka@Ubuntu:~$ ./c
Hello World
Chukwuemeka@Ubuntu:~$ _
</pre>

### 1-compiler
This will compile and assemble C code without linking into a file with the same name as the C file whose name is stored in the global variable `$CFILE`. In order to run this script, open up a terminal and type: 
<pre>
Chukwuemeka@Ubuntu:~$ export CFILE=main.c
Chukwuemeka@Ubuntu:~$ ./1-compiler
Chukwuemeka@Ubuntu:~$ __
</pre>

### 2-assembler
This will compile the C code and assemble it into system specific assembly code. In order to run the script, do the following:
<pre>
Chukwuemeka@Ubuntu:~$ export CFILE=main.c
Chukwuemeka@Ubuntu:~$ ./2-assembler
Chukwuemeka@Ubuntu:~$ __
</pre>

### 3-name 
This will compile a C file into an executable file called `cisfun`.The name of the C file is stored in the `$CFILE`. In order to run the program, open up a terminal and type:
<pre>
Chukwuemeka@Ubuntu:~$ export CFILE=main.c
Chukwuemeka@Ubuntu:~$ ./3-name
Chukwuemeka@Ubuntu:~$ ls
cisfun
Chukwuemeka@Ubuntu:~$ 
</pre>


### 4-puts.c 
This will when compiled and run, will print a message to the terminal using the puts() functions. In order to use this program, we need to type:
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextrat -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
Chukwuemeka@Ubuntu:~$ echo $?
0
</pre>

### 5-printf.c
When this programme is compiled and run, it will display the message `with proper grammar, but the outcome is a piece of art`. In order to use this program, we need to type in the following: 
<pre>
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextrat -pedantic -std=gnu89 4-puts.c && ./a.out
with proper grammar, but the outcome is a piece of art,
Chukwuemeka@Ubuntu:~$ echo $?
0
</pre>

### 6-size.c
When this programme is compiled and run, it will print out the sizes of various data types in the C programming language to the terminal. In order to use it, open a terminal:
<pre>
Chukwuemeka@Ubuntu:~$ gcc 6-size.c -o size64
Chukwuemeka@Ubuntu:~$ ./size64
Size of a char: 1 byte (s)
Size of an int: 4 byte (s)
Size of a long int: 8 byte (s)
Size of a long long int: 8 byte (s)
Size of a float: 4 byte (s)
Chukwuemeka@Ubuntu:~$ 
</pre>


## Advanced Scripts

### 100-intel
When this script is run, it will convert the code contained in the source file stored in the `CFILE` global variable into assembly language and store the resulting assembly code into another file with the `.s` extension. In order to run this script: 
<pre>
Chukwuemeka@Ubuntu:~$ ./100-intel
Chukwuemeka@Ubuntu:~$ _
</pre>




















