#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 * this function is returning c sometimes
 * when a is equal to be b and greater than c
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		lergest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
