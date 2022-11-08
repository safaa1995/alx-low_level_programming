#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main"
/**
 *  main - Program that takes in all integer arguments and returns the sum
 *  @argc: Number of command line arguments
 *  @argv: Array name
 *  Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, z;
	int sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (z = 0; argv[j][z] != '\0'; z++)
		{
			if (argv[j][z] < '0' || argv[j][z] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
