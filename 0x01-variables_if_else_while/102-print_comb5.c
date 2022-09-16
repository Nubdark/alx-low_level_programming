#include <stdio.h>

/**
* main - program that prints all different combinations of two 2-digit numbers
* Return: 0
*/
int main(void)
{
        int i, p;

        for (i = 0; i < 100; i++)                                                                                                       
	{
                for (p = 0; p < 100; i++)
		{
                        if (p > i)
			{
                                putchar((i / 10) + '0');
                                putchar((i % 10) + '0');
                                putchar(' ');
                                putchar((p / 10) + '0');
                                putchar((p % 10) + '0');
                                if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
