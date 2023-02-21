#include <stdio.h>

/**
* main - Entry point
*
* Description: a program that writes 0 to 9 with commas and spaces inbetween
*
* Return: always 0 (success)
*/

int main(void)
{
	int numb = 0;
	while (numb <= 9)
	{
		putchar(numb + '0');
			if ( numb == '5')
				break;
		putchar(',');
		putchar(' ');
			numb++;
	}
	putchar('\n');
	return (0);
}
