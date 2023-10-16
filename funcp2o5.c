#include "main.h"
/**
 * bin_print - handle the %b in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int bin_print(const char *format, va_list args,int *idx)
{
	unsigned int res = 0, i = 0, arg = va_arg(args, unsigned int);
	char digit[1024];

	(void)format;
	if (args == NULL)
		return (-1);
	if (arg == 0)
	{
		_putchar('0');
		res++;
	}
	while (arg > 0)
	{
		digit[i] = arg % 2;
		i++;
		arg /= 2;
	}
	while (i > 0)
	{
		_putchar('0' + digit[--i]);
		res++;
	}
	(*idx)++;
	return (res);
}

/**
 * oct_print - handle the %o in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int oct_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * hex_l_print - handle the %h in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int hex_l_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * hex_h_print - handle the %H in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int hex_h_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * adr_print - handle the %p in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int adr_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
