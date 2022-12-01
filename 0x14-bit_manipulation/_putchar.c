#include <unistd.h>
#include "main.h"

/**
  * _putchar - function that inputs a char
  * @c: char to print
  *
  * Return: On success 1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

