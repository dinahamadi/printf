#include "main.h"
/**
 * _printf - simulate the stdio library printf
 * @format: the first argument
 * Return: the count of printed characters or -1 if failed.
 */
int _printf(const char *format, ...)
{
	int idx = 0, count = 0, rtrn = 0;

	va_list(args);
	va_start(args, format);
	if (args != NULL && format == NULL)
		return (-1);
	if (format == NULL)
		return (-1);
	while (format[idx] != '\0')
	{
		if (format[idx] != '%')
		{
			_putchar(format[idx]);
			idx++;
			count++;
		}
		else
		{
			if (format[++idx] == '\0')
				return (-1);
			rtrn = get_format(format, args, &idx);
			if (rtrn == -1)
				return (-1);
			count += rtrn;
		}
	}
	va_end(args);
	return (count);
}
/**
 * get_flag - handle the flag after the % in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int get_flag(const char *format, va_list args, int *idx)
{
	int i = 0, wd = 0;

	op_t flag[] = {
		{"l", (int (*)(const char*, ...))long_print},
		{"h", (int (*)(const char*, ...))short_print},
		{"0", (int (*)(const char*, ...))zero_padd_print},
		{"-", (int (*)(const char*, ...))l_align_print},
		{"+", (int (*)(const char*, ...))sign_print},
		{".", (int (*)(const char*, ...))precision_print},
		{"*", (int (*)(const char*, ...))wd_width_print},
		{"#", (int (*)(const char*, ...))prefix_print},
		{" ", (int (*)(const char*, ...))space_print},
		{NULL, NULL}
	};
	if (isdigit(format[*idx]) != 0 && (atoi(&format[*idx]) != 0))
	{
		wd = atoi(&format[*idx]);
		(*idx)++;
	}
	while (i < 10)
	{
		if (flag[i].op[0] == format[*idx])
			return (flag[i].f(format, args, wd, &idx));
		i++;
	}
	return (-1);
}

/**
 * get_format - handle the flag after the % in printf
 * @format: the first argument
 * @args : all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */

int get_format(const char *format, va_list args, int *idx)
{
	int i = 0, res = 0;
	int consum = 0;

	op_t ops[] = {
		{"i", (int (*)(const char*, ...))int_print},
		{"d", (int (*)(const char*, ...))int_print},
		{"s", (int (*)(const char*, ...))str_print},
		{"c", (int (*)(const char*, ...))char_print},
		{"u", (int (*)(const char*, ...))unsign_print},
		{"b", (int (*)(const char*, ...))bin_print},
		{"o", (int (*)(const char*, ...))oct_print},
		{"x", (int (*)(const char*, ...))hex_l_print},
		{"X", (int (*)(const char*, ...))hex_h_print},
		{"S", (int (*)(const char*, ...))str_np_print},
		{"p", (int (*)(const char*, ...))adr_print},
		{"r", (int (*)(const char*, ...))rev_print},
		{"R", (int (*)(const char*, ...))rot_print},
		{"%", (int (*)(const char*, ...))per_print},
		{NULL, NULL}
	};
	while (i < 14)
	{
		if (ops[i].op[0] == format[*idx])
		{
			res = ops[i].f(format, args, &consum);
			*idx += consum;
			return (res);
		}
		i++;
	}
	return (-1);
}
