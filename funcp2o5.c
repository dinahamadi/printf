#include "main.h"
/**
 * bin_print - handle the %b in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int bin_print(const char *format, va_list args, int *idx)
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
		digit[i] = arg % 8;
		i++;
		arg /= 8;
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
 * hex_l_print - handle the %h in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int hex_l_print(const char *format, va_list args, int *idx)
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
		digit[i] = arg % 16;
		i++;
		arg /= 16;
	}
	while (i > 0)
	{
		if (digit[--i] < 10)
			_putchar('0' + digit[i]);
		else
			_putchar('a' + (digit[i] % 10));
		res++;
	}
	(*idx)++;
	return (res);
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
		digit[i] = arg % 16;
		i++;
		arg /= 16;
	}
	while (i > 0)
	{
		if (digit[--i] < 10)
			_putchar('0' + digit[i]);
		else
			_putchar('A' + (digit[i] % 10));
		res++;
	}
	(*idx)++;
	return (res);
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
	unsigned int res = 0, i = 0;
	void *arg = va_arg(args, void *);
	uintptr_t addr = (uintptr_t)arg;
	char digit[1024];

	(void)format;
	if (args == NULL)
		return (-1);
	if (arg == 0)
	{
		res += write(1, "(nil)", 5);
		(*idx)++;
		return (res);
	}
	res += write(1, "0x", 2);
	while (addr > 0)
	{
		digit[i] = addr % 16;
		i++;
		addr /= 16;
	}
	while (i > 0)
	{
		if (digit[--i] < 10)
			_putchar('0' + digit[i]);
		else
			_putchar('a' + (digit[i] % 10));
		res++;
	}
	(*idx)++;
	return (res);
}
