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
		return (write_octal(arg));
	case 'x':
		return (write_l_hex(arg));
	case 'X':
		return (write_h_hex(arg));
	case 'i':
		return (write_long(arg));
	case 'd':
		return (write_long(arg));
	case 'u':
		return (write_ulong((unsigned long)arg));
	default:
		return (write(1, "%\n", 2));
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
	int arg = va_arg(args, int);

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
		return (write_octal(arg));
	case 'x':
		return (write_l_hex(arg));
	case 'X':
		return (write_h_hex(arg));
	case 'i':
		return (write_long(arg));
	case 'd':
		return (write_long(arg));
	case 'u':
		return (write_ulong((unsigned long)arg));
	default:
		return (write(1, "%\n", 2));
	}
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
	int res = 0, arg;

	if ((format[++(*idx)]) == '\0')
		return (-1);
	if ((format[(*idx)] == ' '))
		++(*idx);
	if (((format[(*idx)]) == 'd') || ((format[(*idx)]) == 'i'))
	{
		arg = va_arg(args, int);
		if (arg == 0)
		{
			(*idx)++;
			return (write(1, "+0", 2));
		}
		if (arg < 0)
		{
			res += _putchar('-');
			if (arg == INT_MIN)
			{
				res += _putchar('2');
				arg = 147483648;
			}
			else
				arg = (-1) * arg;
		}
		else
			res += _putchar('+');
		res += print_pos_arg(arg);
		(*idx)++;
		return (res);
	}
	return (-1);
}
