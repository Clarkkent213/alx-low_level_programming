#include "main.h"

/**
 * print_sign _ prints the sign of a number
 * @n: the number of the sign to be prinnted
 * Return: 1 if number is greater than zero
 * 0 of number is zero
 * -1 number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
