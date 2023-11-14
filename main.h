#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(char *c);
int _putchar(char *c);
char *my_itoa(long int n, char *str, int b);

#endif
