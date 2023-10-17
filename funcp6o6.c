#include "main.h"
/**
 * write_octal - helper of %o
 * @arg: the decimal value
 * Return: the count of printed characters.
 */
int write_octal(unsigned int arg)
{
	int res = 0, i = 0;
	char digit[1024];

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
int write_h_hex(unsigned int arg)
{
	unsigned int res = 0, i = 0;
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
	return (++res);
}
/**
 * write_l_hex - helper of %x
 * @arg: the decimal value
 * Return: the count of printed characters.
 */
int write_l_hex(unsigned int arg)
{
	unsigned int res = 0, i = 0;
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
	return (++res);
}
