#include "main.h"
/**
 * unsign_print - simulate the stdio printf function for %u
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int unsign_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("unsigned called\n");
	return (0);
}
/**
 * oct_print - simulate the stdio printf function for %o
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int oct_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("oct called\n");
	return (0);

}

/**
 * hex_l_print - simulate the stdio printf function for %x
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int hex_l_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("hex l called\n");
	return (0);
}
/**
 * hex_h_print - simulate the stdio printf function for %X
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int hex_h_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("hex_h called\n");
	return (0);
}
/**
 * adr_print - simulate the stdio printf function for %p
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int adr_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("adr called\n");
	return (0);
}
