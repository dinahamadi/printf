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
	int res = 0, i = 0;
	char arg_str[1024];
	char *arg = va_arg(args, char *);

	(void)format;

	if (arg == NULL)
	{
		(*idx)++;
		return print_null();
	}
	strncpy(arg_str, arg, 1023);
	arg_str[1023] = '\0';
	while (arg_str[i] != '\0') {
		res += _putchar(arg_str[i]);
		i++;
	}
	(*idx)++;
	return res;
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
	int res = 0, i = 0, j = 0;
	char digit[1024];
	char arg_str[1024], *arg = (char *)va_arg(args, char *);

	(void)format;
	if (arg == NULL)
	{
		(*idx)++;
		return (print_null());
	}
	strncpy(arg_str, arg, 1023);
	arg_str[1023] = '\0';
	while (arg_str[i] != '\0')
	{
		if (((int)(arg_str[i]) < 32 && (int)(arg_str[i]) > 0)
			|| ((int)(arg_str[i]) >= 127))
		{
			write(1, "\\x", 2);
			res += 2;
			j = 0;
			if ((int)(arg_str[i]) < 16)
				res += _putchar('0');
			while ((int)(arg_str[i]) > 0)
			{
				digit[j++] = (int)(arg_str[i]) % 16;
				arg_str[i] = (int)(arg_str[i]) / 16;
			}
			while (j > 0)
			{
				if (digit[--j] < 10)
					_putchar('0' + digit[j]);
				else
					_putchar('A' + (digit[j] % 10));
				res++;
			}
		}
		else
			res += write(1, &arg_str[i], 1);
		i++;
	}
	(*idx)++;
	return (res);
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
	int i = 0;
	char *arg = (char *)va_arg(args, char *);

	(void)format;
	if (args == NULL)
		return (-1);
	i = strlen(arg);
	while (i >= 0)
	{
		_putchar(arg[i--]);
	}
	(*idx)++;
	return (strlen(arg));
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
/**
 * print_null - print (null)
 * Return: 6.
 */
int print_null(void)
{
	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}
