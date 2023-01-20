#ifndef _VARIADIC_FUNTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct print - print type with corresponding print function
 * @t: print type
 * #f: print function
 */

typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);

#endif
