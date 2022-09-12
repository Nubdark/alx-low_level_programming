#include <stdio.h>

/**
 * main - print function in it putchar only
 *
 * Description: using the main function
 * this program prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
