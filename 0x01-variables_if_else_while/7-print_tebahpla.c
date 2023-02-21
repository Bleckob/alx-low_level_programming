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
	char  alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	
	putchar('\n');
	return (0);
}
