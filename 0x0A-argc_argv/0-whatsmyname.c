#include <stdio.h>
#include "main.h"

/**
 * main - print file name
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);

}
