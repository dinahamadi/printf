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
	char *arg = (char *)va_arg(args, char *);

	(void)format;
	if (args == NULL)
		return (-1);
	if (arg == NULL)
	{
		(*idx)++;
		return (print_null());
	}
	else
	{
		write(1, arg, strlen(arg));
		(*idx)++;
		return (strlen(arg));
	}
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
	char str[1024], *arg = (char *)va_arg(args, char *);

	(void)format;
	if (arg == NULL)
	{
		(*idx)++;
		return (print_null());
	}
	strncpy(str, arg, 1023);
	str[1023] = '\0';
	while (str[i] != '\0')
	{
		if (((int)(str[i]) < 32 && (int)(str[i]) > 0) || ((int)(str[i]) >= 127))
		{
			res += write(1, "\\x", 2);
			j = 0;
			if ((int)(str[i]) < 16)
				res += _putchar('0');
			while ((int)(str[i]) > 0)
			{
				digit[j++] = (int)(str[i]) % 16;
				str[i] = (int)(str[i]) / 16;
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
			res += write(1, &str[i], 1);
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
	while (i > 0)
		_putchar(arg[--i]);
	if (strlen(arg) % 2 != 0)
		_putchar(arg[i]);
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
	int i = 0;
	char *arg = (char *)va_arg(args, char *);

	(void)format;
	if (arg == NULL)
	{
		(*idx)++;
		return (print_null());
	}
	if (*arg == '\0')
	{
		(*idx)++;
		return (0);
	}
	i = strlen(arg);
	while (i >= 0)
	{
		if ((arg[i] >= 'a') && (arg[i] <= 'z'))
			_putchar(arg[--i] + 13);
		if ((arg[i] >= 'A') && (arg[i] <= 'Z'))
			_putchar(arg[--i] - 13);
	}
	(*idx)++;
	return (strlen(arg));
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
