# WHAT EACH PROGRAM DOES

### 0-object_like_macro.h
This is a header file which defines a macro `SIZE` and assigns it the value `1024` as it's token. When ever this header file is included, and the identifier `SIZE` is used at any point in the code, once the code is compiled and the preprocessor runs through the code, the preprocessor will replace every occurrence of `SIZE` with `1024`.

### 1-pi.h
This is a header file which defines a macro `SIZE` and assigns it the value `3.14159265359` as it's token. When ever this header file is included, and the identifier `PI` is used at any point in the code, once the code is compiled and the preprocessor runs through the code, the preprocessor will replace every occurrence of `PI` with `3.14159265359`.

### 2-main.c
This file contains a program which, when compiled and run, would print out the name of the file being compiled and run to the screen followed by a newline. I used the standard predefined macro `__FILE__` to accomplish this.

### 3-function_like_macro.h
This header file defines the function like macro `ABS` which takes an argument `X` and determines the absolute value of `X`. `X` can be any number supplied by the user. once compiled, the preprocessor will replace all occurrences of `X` with the value provided for the user i.e `n`. Hence the call `ABS(X)` will, during preprocessing, become `ABS(n)` and after preprocessing, the absolute value of `X` will be returned for use by the compiler and eventually by the program.

### 4-sum.h
This header file defines the function like macro `SUM` which takes two arguments `X` and `Y` and determines the sum of `X` and `Y`. `X` and `Y` can be any numbers supplied by the user. once compiled, the preprocessor will replace all occurrences of `X` and `Y` with the value provided for the user i.e `n` and `m`. Hence the call `SUM(X, Y)` will, during preprocessing, become `SUM(n, m)` and after preprocessing, the sum of `X` and `Y` will be returned for use by the compiler and eventually by the program.
