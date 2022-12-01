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
  * _strlen - function that returns the length of a string
  *
  * @s: pointer to a string
  * Return: int
  */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i += 1;
	return (i);
}

/**
  * binary_to_uint - function that converts a binary number to an unsigned int
  * @b: pointing to a string of 0 and 1 chars
  * Return: the converted number, or 0 if ther is one or more chars
  * in the string b that is not 0 or 1
  * b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	int len, exp = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (len-- && len >= 0)
	{
		if (b[len] == '1')
			res += _exponent(2, exp);
		else if (b[len] != '0')
			return (0);
		exp++;
	}
	return (res);
}
