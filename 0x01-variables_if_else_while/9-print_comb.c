#include <stdio.h>
/**
 * main - a program that prints all possible combinations of single number
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
