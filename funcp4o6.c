#include "main.h"

/**
 * long_print - handle the %l in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int long_print(const char *format, va_list args, int *idx)
{
	long arg = va_arg(args, long);

	if (args == NULL)
		return (-1);
	if (format[++(*idx)] == '\0')
		return (-1);
	if (arg == 0)
	{
		(*idx)++;
		return (_putchar('0'));
	}
	switch (format[(*idx)++])
	{
	case 'o':
		_putchar('0');
		return (1 + write_octal(arg));
	case 'x':
		write(1, "0x", 2);
		return (2 + write_l_hex(arg));
	case 'X':
		write(1, "0X", 2);
		return (2 + write_h_hex(arg));
	case 'i':
		return (1);
	case 'd':
		return (1);
	case 'u':
		return (1);
	default:
		return (-1);
	}
}
/**
 * short_print - handle the %h in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int short_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * zero_padd_print - handle the %0 in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int zero_padd_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * l_align_print - handle the %- in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int l_align_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * sign_print - handle the %+ in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int sign_print(const char *format, va_list args, int *idx)
{
	int res = 0, i = 0, arg = va_arg(args, int), digit[10];

	(void)format;
	if (args == NULL)
		return (-1);
	if (format[++(*idx)] == '\0')
		return (-1);
	if (arg == 0)
	{
		(*idx) += 2;
		return (write(1, "+0", 2));
	}
	if (arg < 0)
	{
		res += _putchar('-');
		arg = (-1) * arg;
	}
	else
		res += _putchar('+');
	if (arg == INT_MIN)
	{
		_putchar('2');
		arg = 147483648;
		res++;
	}
	while (arg > 0)
	{
		digit[i++] = arg % 10;
		arg /= 10;
	}
	while (i > 0)
		res += _putchar('0' + digit[--i]);
	(*idx) += 2;
	return (res);
}
