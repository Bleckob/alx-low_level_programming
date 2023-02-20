#include <stdio.h>

/**
* main - Entry point
*
* Description: a program that writes alphabets in lowercase
*
* Return: always return 0 (success)
*/

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar (c);
		c++;
	}
	c = 'a';
while (c <= 'f')
	{
		 putchar (c);
		 c++;
	}
	putchar ('\n');
	return (0);
}

