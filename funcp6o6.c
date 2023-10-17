#include "main.h"
/**
 * write_octal - helper of %o
 * @arg: the decimal value
 * Return: the count of printed characters.
 */
int write_octal(unsigned long arg)
{
	int res = 0, i = 0;
	char digit[1024];

	if (arg == ULONG_MAX)
		return (write(1, "1777777777777777777777", 22));
	while (arg > 0)
	{
		digit[i++] = arg % 8;
		arg /= 8;
	}
	while (i > 0)
		res += _putchar('0' + digit[--i]);
	return (res);
}
/**
 * write_h_hex - helper of %X
 * @arg: the decimal value
 * Return: the count of printed characters.
 */
int write_h_hex(unsigned long arg)
{
	int res = 0, i = 0;
	char digit[1024];

	while (arg > 0)
	{
		digit[i++] = arg % 16;
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
	return (+res);
}
/**
 * write_l_hex - helper of %x
 * @arg: the decimal value
 * Return: the count of printed characters.
 */
int write_l_hex(unsigned long arg)
{
	int res = 0, i = 0;
	char digit[1024];

	while (arg > 0)
	{
		digit[i++] = arg % 16;
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
	return (+res);
}

int write_long(long arg)
{
	int res = 0, i = 0, digit[24];

	if (arg < 0)
	{
		_putchar('-');
		arg = (-1) * arg;
		res++;
	}
	if (arg == LONG_MIN)
	{
		_putchar('2');
		arg = 147483646L;
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
	return (res);
}
int write_ulong(long arg)
{
	(void)arg;
	return (1);
}
