#include <stdio.h>

/**
* main - Entry point
*
* Description: a program that writes numbers backwards from 9 to 0
*
* Return: always return 0 (success)
*/

int main(void)
{
	int numb;

	for (numb = '9'; numb >= '0'; numb--)
	{
		putchar(numb + '9');
	}
putchar('\n');
	return (0);
}
