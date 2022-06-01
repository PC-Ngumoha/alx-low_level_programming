# WHAT EACH PROGRAM DOES

## Basic Programs

### 0-read_textfile.c
This program contains the function `read_textfile` which takes a string literal `filename` and an integer `letters` and reads `letters` letters from the file `filename` and prints them out to the screen. In order to use this program:

Create a dummy file `Requiescat`:
```
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.
```
Then, Create test file `0-main.c` and enter the following code into it:
```
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
```
**Compile**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
```
**Run (Passing in the dummy file you just created)**
```
Chukwuemeka@Ubuntu:~$ ./a Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
Chukwuemeka@Ubuntu:~$ 
```

### 1-create_file.c
This program contains the function `create_file` which takes two arguments: a string literal `filename` which is the name of a file to be created or already exists in memory and a string `text_content` which holds the message to be stored into the file. It uses these two arguments to create a file in the current directory. If successful, it returns `1`, otherwise, it returns `-1`. In order to use this program:

Create test file `1-main.c` and enter the following code into it:
```
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
```
**Compile**
```
Chukwuemeka@Ubuntu:~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
```
**Run**
```
Chukwuemeka@Ubuntu:~$ ./b hello world
-> 1)
Chukwuemeka@Ubuntu:~$ 
```
**Check If The File Was Created**
```
Chukwuemeka@Ubuntu:~$ cat hello
world Chukwuemeka@Ubuntu:~$  
```



















