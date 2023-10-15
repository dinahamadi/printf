#include "main.h"
/**
 * precision_print - handle the %. in printf
 * @format: the first argument
 * @args: all arguments
 * @wd: the width
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int precision_print(const char *format, va_list args, int wd, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	return (1);
}
/**
 * wd_width_print - handle the %number in printf
 * @format: the first argument
 * @args: all arguments
 * @wd: the width
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int wd_width_print(const char *format, va_list args, int wd, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	return (1);
}
/**
 * prefix_print - handle the %# in printf
 * @format: the first argument
 * @args: all arguments
 * @wd: the width
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int prefix_print(const char *format, va_list args, int wd, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	return (1);
}
/**
 * space_print - handle the % followed by space in printf
 * @format: the first argument
 * @args: all arguments
 * @wd: the width
 * @idx: the index
 * Return: the count of printed characters or -1 if failed.
 */
int space_print(const char *format, va_list args, int wd, int *idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	return (1);
}
