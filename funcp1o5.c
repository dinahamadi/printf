#include "main.h"
/**
 * int_print - handle the %i in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int int_print(const char *format, va_list args, int *idx)
{
	int res = 0, i = 0, arg = va_arg(args, int), digit[10];

	(void)format;
	if (args == NULL)
		return (-1);
	if (arg == 0)
	{
		_putchar('0');
		res++;
	}
	if (arg < 0)
	{
		_putchar('-');
		arg = (-1) * arg;
		res++;
	}
	if (arg == INT_MIN)
	{
		_putchar('2');
		arg = 147483648;
		res ++;
	}
	while (arg > 0)
	{
		digit[i] = arg % 10;
		i++;
		arg /= 10;
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
 * unsign_print - handle the %u in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int unsign_print(const char *format, va_list args, int *idx)
{
	unsigned int res = 0, i = 0, arg = va_arg(args, unsigned  int), digit[10];

	(void)format;
	if (args == NULL)
		return (-1);
	if (arg == 0)
	{
		_putchar('0');
		res++;
	}
	if (arg == UINT_MAX)
	{
		_putchar('4');
		arg = 294967295;
		res++;
	}
	while (arg > 0)
	{
		digit[i] = arg % 10;
		i++;
		arg /= 10;
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
 * char_print - handle the %c in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int char_print(const char *format, va_list args, int *idx)
{
	char arg = va_arg(args, int);

	(void)format;
	if (args == NULL)
		return (-1);
	_putchar(arg);
	(*idx)++;
	return (1);
}
/**
 * per_print - handle the %% in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int per_print(const char *format, va_list args, int *idx)
{
	(void)format;
	(void)args;
	_putchar('%');
	(*idx)++;
	return (1);
}
