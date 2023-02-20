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
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}

	c = 'A';
	while (c <= 'Z')
	{
		 putchar (c);
		 c++;
	}
	putchar ('\n');
	return (0);
}

