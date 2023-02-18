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
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb + '0');
	}
putchar('\n');
	return (0);
}
