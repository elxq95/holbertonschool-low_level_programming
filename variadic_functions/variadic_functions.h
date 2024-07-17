#ifndef MYHEADER_H
#define MYHEADER_H
#include <stdarg.h>

typedef struct format_spec {
        char spec;
        void (*print_func)(va_list args);
} format_spec_t;

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
