# WHAT EACH PROGRAM DOES:

## Basic Programs

### 0-whatsmyname.c
This is a program which when compiled with the `-Wno-unused-parameter` compiler option and run will print out it's name to the screen. In order to use this program:

**Compile It:**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -Werror -Wextra -Wno-unused-parameter -pedantic -std=gnu89 0-whatsmyname.c -o mynameis

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
