#include "main.h"
/**
 * str_print - handle the %s in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int str_print(const char* format, va_list args, int* idx)
{
	char* arg = (char*)va_arg(args, char*);

	(void)format;
	if (arg == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		(*idx)++;
		return (6);
	}
	write(1, arg, strlen(arg));
	(*idx)++;
	return (strlen(arg));
}
/**
 * str_np_print - handle the %S in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int str_np_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * rev_print - handle the %r in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */

int rev_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * rot_print - handle the %R in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int rot_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
