#include <stdio.h>
#include "main.h"

/**
 * main: prints all arguments it recieves
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char*argv[])
	{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
