#ifndef MAIN_H_
#define MAIN_H_

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int num, unsigned int index);
int set_bit(unsigned long int *num, unsigned int index);
int clear_bit(unsigned long int *num, unsigned int index);

#endif /* MAIN_H_ */
