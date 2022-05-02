#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
int _isupper(int c);
int _isdigit(int c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _atoi(char *s);

#endif /* MAIN_H_ */
