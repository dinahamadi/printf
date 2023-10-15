#include "main.h"

/**
 * long_print - handle the %l in printf
 * @format: the first argument
 * @args: all arguments
 * @wd: the width
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int long_print(const char *format, va_list args, int wd, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	return (1);
}
/**
 * short_print - handle the %h in printf
 * @format: the first argument
 * @args: all arguments
 * @wd: the width
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int short_print(const char *format, va_list args, int wd, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	return (1);
}
/**
 * zero_padd_print - handle the %0 in printf
 * @format: the first argument
 * @args: all arguments
 * @wd: the width
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int zero_padd_print(const char *format, va_list args, int wd, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	return (1);
}
/**
 * l_align_print - handle the %- in printf
 * @format: the first argument
 * @args: all arguments
 * @wd: the width
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int l_align_print(const char *format, va_list args, int wd, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	return (1);
}
/**
 * sign_print - handle the %+ in printf
 * @format: the first argument
 * @args: all arguments
 * @wd: the width
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int sign_print(const char *format, va_list args, int wd, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	return (1);
}
