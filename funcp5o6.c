#include "main.h"
/**
 * precision_print - handle the %. in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int precision_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * wd_width_print - handle the %number in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int wd_width_print(const char *format, va_list args, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	return (1);
}
/**
 * prefix_print - handle the %# in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int prefix_print(const char *format, va_list args, int *idx)
{
	int res = 0;
	unsigned long arg = va_arg(args, unsigned long);

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
		res = 1 + write_octal(arg);
		break;
	case 'x':
		write(1, "0x", 2);
		res = 2 + write_l_hex(arg);
		break;
	case 'X':
		write(1, "0X", 2);
		res = 2 + write_h_hex(arg);
		break;
	default:
		return (-1);
	}
	return (res);
}
/**
 * space_print - handle the % followed by space in printf
 * @format: the first argument
 * @args: all arguments
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int space_print(const char *format, va_list args, int *idx)
{
	int res = 0, i = 0, digit[10], arg;

	if ((format[++(*idx)]) == '\0')
		return (-1);
	if ((format[(*idx)] == '+'))
		return (sign_print(format, args, idx));
	i = (*idx) + 1;
	if ((format[++i] == '%') && (format[++i] == ' '))
	{
		(*idx) = i;
		return (write(1, "% % ", 4));
	}
	if (((format[(*idx)]) == 'd') || ((format[(*idx)]) == 'i'))
	{
		arg = va_arg(args, int);
		if (arg == 0)
		{
			(*idx)++;
			return (write(1, " 0", 2));
		}
		if (arg < 0)
		{
			res += _putchar('-');
			arg = (-1) * arg;
		}
		else
			res += _putchar(' ');
		i = 0;
		while (arg > 0)
		{
			digit[i++] = arg % 10;
			arg /= 10;
		}
		while (i > 0)
			res += _putchar('0' + digit[--i]);
		(*idx)++;
		return (res);
	}
	return (-1);
}
