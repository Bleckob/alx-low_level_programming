#include <stdio.h>

/**
* main - Entry point
*
* Description: a program that writes numbers from 0 to 9
*
* Return: always return 0 (success)
*/

int main(void)
{
	int  n;

	for (n = '0'; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}


	putchar('\n');
	return (0);
}
