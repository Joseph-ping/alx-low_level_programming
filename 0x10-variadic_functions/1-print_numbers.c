#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @p: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int p, ...)
{
	char *sep;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, p);

	if (p > 0)
		printf("%d", va_arg(list, int));
	for (i = 1; i < p; i++)
		printf("%s%d", sep, va_arg(list, int));
	printf("\p");
	va_end(list);
}
