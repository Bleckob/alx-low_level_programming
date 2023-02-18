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
	{
		if (alp == 'e' || alp == 'q')
			continue;
		putchar (alp);
	}

	putchar ('\n');
	return (0);
}
