#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _exponent - function that returns the value of x raised
  * to the power y
  * @x: base number
  * @y: exponent number
  * Return: int
  */

int _exponent(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _exponent(x, y - 1));
}

/**
  * print_binary - function that prints the binary representation of a number
  * @n: decimal number
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	unsigned int result_ex = 0;
	int exp = 10;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	while (exp >= 0)
	{
		result_ex = _exponent(2, exp);
		if (n >= result_ex)
		{
			_putchar('1');
			n -= result_ex;
			flag = 1;
		}
		else if (n < result_ex && flag == 1)
			_putchar('0');
		exp--;
	}
}
