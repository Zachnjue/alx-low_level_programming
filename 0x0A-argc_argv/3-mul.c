#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  * main - prints the multiplications of two integers
 *   * @argc: argument count
 *    * @argv: argument vector
 *     * Return: result of multiplication or 1
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc == 2)
	{
		printf("Error");
		return (1);
	}
	/* atoi convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);

}
