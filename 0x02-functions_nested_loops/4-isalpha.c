#include "main.h"
/**
 * _isalpha - Shows 1 if the input is c
 *
 * Return: 1 for letters. Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
