#include "main.h"
/**
 * rev_print - simulate the stdio printf function for %r
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int rev_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("rev called\n");
	return (0);
}
/**
 * rot_print - simulate the stdio printf function for %R
 * @format: printf first argument
 * @arg: the passed argument for the % in question
 * @idx: the index
 * Return: an integer representing the number of characters written.
 */
int rot_print(const char *format, const char *arg, int idx)
{
	(void)idx;
	(void)format;
	(void)arg;
	printf("rot 13 called\n");
	return (0);

}
