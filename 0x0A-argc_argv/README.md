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
This is a program which when compiled and run will print out the number of command line arguments to the screen. In order to use this program:

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
