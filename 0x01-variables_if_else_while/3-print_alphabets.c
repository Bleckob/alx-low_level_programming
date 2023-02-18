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
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar (alp);
	char c;

	for (c = 'A'; c <= 'Z'; c++)
		putchar (c);
	putchar ('\n');
	return (0);
}
