#include "main.h"
/**
 * _printf - simulate the stdio printf function
 * @format: printf first argument
 * Return: an integer representing the number of characters written
 * or -1 in failure.
 */
int _printf(const char *format, ...)
{
	int idx = 0, count = 0, cont = 0;
	va_list args;
	const char *arg;

	va_start(args, format);
	idx = 0;
	while (format && (format[idx] != '\0'))
	{
		if (format[idx] != '%')
		{
			count += _putchar(format[idx]);
			idx++;
		}
		else
		{
			idx++;
			count++;
			cont = get_flag(format, args, idx);
			if (cont == -1)
			{
				arg = va_arg(args, char *);
				cont = get_format(format, arg, idx);
				if (cont == -1)
					return (-1);
			}
			else
				count += cont;
		}
	}
	va_end(args);
	return (count);
}
/**
 * get_flag - handle _printf with a flag if the character after %
 * if a flag value
 * @format: printf first argument
 * @args: the list of arguments
 * @idx: the index
 * Return: an integer representing the number of characters written
 * after the % character or -1 in failure.
 */
int get_flag(const char *format, va_list args, int idx)
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
	if (isdigit(format[idx]) != 0 && (atoi(&format[idx]) != 0))
	{
		wd = atoi(&format[idx]);
		idx++;
	}
	while (i < 10)
	{
		if (strcmp(flag[i].op, &format[idx]) == 0)
			return (flag[i].f(format, args, wd, idx));
		i++;
	}
	return (-1);
}
/**
 * get_format - handle _printf with a no flag
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written
 * after the % character or -1 in failure.
 */
int get_format(const char *format, const char *arg, int idx)
{
	int i = 0;
	op_t ops[] = {
		{"i", (int (*)(const char*, ...))int_print},
		{"d", (int (*)(const char*, ...))int_print},
		{"s", (int (*)(const char*, ...))str_print},
		{"c", (int (*)(const char*, ...))char_print},
		{"u", (int (*)(const char*, ...))unsign_print},
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
	while (i < 13)
	{
		if (strcmp(ops[i].op, &format[idx]) == 0)
		{
			idx++;
			return (ops[i].f(format, arg, idx));
		}
		i++;
	}
	return (-1);
}
