#include "main.h"

/**
 * print alphabet in lower case
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char alp = 'a';

	while (alp <= 'z')
	{
	_putchar (alp);
	alp++;
	}
	_putchar('\n');
}
