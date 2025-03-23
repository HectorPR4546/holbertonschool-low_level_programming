#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print any char
 * @format: the format of char
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
