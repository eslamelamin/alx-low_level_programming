#include "main.h"

/**
 *  _islower - Shows 1 if the input
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
        r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
        _putchar(r + '0');
    	_putchar('\n');
        return (0);
}
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
