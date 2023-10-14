#include "main.h"
/**
 * int_print - simulate the stdio printf function for %i
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int int_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("int called\n");
	return (0);
}
/**
 * char_print - simulate the stdio printf function for %c
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int char_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("char called\n");
	return (0);
}
/**
 * str_print - simulate the stdio printf function for %s
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int str_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("str called\n");
	return (0);

}

/**
 * str_np_print - simulate the stdio printf function for %S
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */

int str_np_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("special str called\n");
	return (0);
}
/**
 * per_print - simulate the stdio printf function for %%
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */

int per_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("percentage called\n");
	return (0);
}
