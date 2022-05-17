#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints strings
* @separator: pointer param
* @n: param
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int pat;

	va_start(strings, n);

	for (pat = 0; pat < n; pat++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (pat != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
