#include "main.h"
/**
 * long_print - simulate the stdio printf function for %l
 * @format: printf first argument
 * @args: a va list
 * @wd: a witdh if specified
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int long_print(const char *format, va_list args, int wd, int idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	printf("l is called");
	return (0);
}
/**
 * short_print - simulate the stdio printf function for %h
 * @format: printf first argument
 * @args: a va list
 * @wd: a witdh if specified
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int short_print(const char *format, va_list args, int wd, int idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	printf("d is called");
	return (0);
}
/**
 * zero_padd_print - simulate the stdio printf function for %0
 * @format: printf first argument
 * @args: a va list
 * @wd: a witdh if specified
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int zero_padd_print(const char *format, va_list args, int wd, int idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	printf("0 is called");
	return (0);
}
/**
 * l_align_print - simulate the stdio printf function for %-
 * @format: printf first argument
 * @args: a va list
 * @wd: a witdh if specified
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int l_align_print(const char *format, va_list args, int wd, int idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	printf("= is called");
	return (0);
}
/**
 * sign_print - simulate the stdio printf function for %+
 * @format: printf first argument
 * @args: a va list
 * @wd: a witdh if specified
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int sign_print(const char *format, va_list args, int wd, int idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	printf("+ is called");
	return (0);
}
