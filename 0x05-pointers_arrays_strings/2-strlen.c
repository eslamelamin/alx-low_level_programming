#include "main.h"

/**
 * _strlen - return the length of a string
 * Owned By Bwave
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
