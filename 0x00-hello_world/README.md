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





















