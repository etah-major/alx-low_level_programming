#include <stdio.h>
/**
 * main - print if positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Progamming is positive zero, or negative
 * Return: 0
 */
int main(void)
{
	char c;
	for (c = '0' ; <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
