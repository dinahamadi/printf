#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <stdint.h>

extern int idx;

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(const char *format, ...);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int get_format(const char *format, va_list args, int *idx);
int int_print(const char *format, va_list args, int *idx);
int str_print(const char *format, va_list args, int *idx);
int char_print(const char *format, va_list args, int *idx);
int unsign_print(const char *format, va_list args, int *idx);
int bin_print(const char *format, va_list args, int *idx);
int oct_print(const char *format, va_list args, int *idx);
int hex_l_print(const char *format, va_list args, int *idx);
int hex_h_print(const char *format, va_list args, int *idx);
int str_np_print(const char *format, va_list args, int *idx);
int adr_print(const char *format, va_list args, int *idx);
int rev_print(const char *format, va_list args, int *idx);
int rot_print(const char *format, va_list args, int *idx);
int per_print(const char *format, va_list args, int *idx);
int long_print(const char *format, va_list args,int *idx);
int short_print(const char *format, va_list args, int *idx);
int zero_padd_print(const char *format, va_list args, int *idx);
int l_align_print(const char *format, va_list args, int *idx);
int sign_print(const char *format, va_list args, int *idx);
int precision_print(const char *format, va_list args, int *idx);
int wd_width_print(const char *format, va_list args, int *idx);
int prefix_print(const char *format, va_list args, int *idx);
int space_print(const char *format, va_list args, int *idx);
int print_null(void);
#endif
