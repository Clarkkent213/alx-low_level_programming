#include "main.h"

/**
 * print_most_numbers - print numbers from 0 up to 9
 *
 * description: Prints the numbers excluding 2 and 4
 *
 * Return: The numbers from 0 up to 9
 */
void prints_most_numbers(void);
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{ continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	putchar('n');
}
