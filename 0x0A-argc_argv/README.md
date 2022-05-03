# WHAT EACH PROGRAM DOES:

## Basic Programs

### 0-whatsmyname.c
This is a program which when compiled and run will print out it's name to the screen. In order to use this program:

**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o mynameis
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./mynameis 
./mynameis
Chukwuemeka@Ubuntu:~$ mv mynameis mynewnameis
Chukwuemeka@Ubuntu:~$ ./mynewnameis 
./mynewnameis
Chukwuemeka@Ubuntu:~$ 
```

### 1-args.c
This is a program which when compiled and run with command-line arguments will print out the number of command line arguments to the screen. In order to use this program:

**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./nargs 
0
Chukwuemeka@Ubuntu:~$ ./nargs hello
1
Chukwuemeka@Ubuntu:~$ ./nargs "hello, world"
1
Chukwuemeka@Ubuntu:~$ ./nargs hello, world
2
Chukwuemeka@Ubuntu:~$ 
```
### 2-args.c
This is a program which when compiled and run with command-line arguments will print out all the command-line arguments to the screen. In order to use this program:

**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./args 
./args
Chukwuemeka@Ubuntu:~$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
Chukwuemeka@Ubuntu:~$ 
```
### 3-mul.c
This is a program which when compiled and run with command line arguments will calculate the product of the command line arguments (which we are assuming are integers) and prints the result to the screen followed by a newline. In order to use this program:

**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
```
**Run It:**
```
Chukwuemeka@Ubuntu:~$ ./mul 2 3
6
Chukwuemeka@Ubuntu:~$ ./mul 2 -3
-6
Chukwuemeka@Ubuntu:~$ ./mul 2 0
0
Chukwuemeka@Ubuntu:~$ ./mul 245 3245342
795108790
Chukwuemeka@Ubuntu:~$ ./mul
Error
Chukwuemeka@Ubuntu:~$ 
```










