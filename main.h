#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *s, int *n);
int _binary(unsigned int b, int *n);
int _case(const char *format, int i, va_list args, &n);

#endif
