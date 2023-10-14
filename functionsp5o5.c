#include "main.h"
/**
 * precision_print - simulate the stdio printf function for %.
 * @format: printf first argument
 * @args: a va list
 * @wd: a witdh if specified
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int precision_print(const char *format, va_list args, int wd, int idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	printf(". is called");
	return (0);
}
/**
 * wd_width_print - simulate the stdio printf function for %*
 * @format: printf first argument
 * @args: a va list
 * @wd: a witdh if specified
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int wd_width_print(const char *format, va_list args, int wd, int idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	printf("* is called");
	return (0);
}
/**
 * prefix_print - simulate the stdio printf function for %#
 * @format: printf first argument
 * @args: a va list
 * @wd: a witdh if specified
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int prefix_print(const char *format, va_list args, int wd, int idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	printf("# is called");
	return (0);
}
/**
 * space_print - simulate the stdio printf function for %space
 * @format: printf first argument
 * @args: a va list
 * @wd: a witdh if specified
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int space_print(const char *format, va_list args, int wd, int idx)
{
	(void)idx;
	(void)format;
	(void)args;
	(void)wd;
	printf("  is called");
	return (0);
}
