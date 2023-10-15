#include "main.h"
/**
 * str_print - handle the %s in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int str_print(const char *format, va_list args, int *idx)
{
	int i = 0;
	char *arg = va_arg(args, char *);

	(void)format;
	if (args == NULL)
		return (-1);
	if (arg == NULL)
	{
		_putchar('(');
		_putchar('N');
		_putchar('U');
		_putchar('L');
		_putchar('L');
		_putchar(')');
		(*idx)++;
		return (6);
	}
	while (arg[i] != '\0')
	{
		_putchar(arg[i]);
		i++;
	}
	(*idx)++;
	return (i);
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
