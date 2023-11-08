#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: difference of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multipies two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: division of the two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - finds remainder of division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of a division equation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
