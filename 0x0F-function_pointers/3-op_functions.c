#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - this prints the name of a function
 * @a: the name of waht shold be printed
 * @b: this is the funcliton
 * Return: (a + b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this prints the name of a function
 * @a: the name of waht shold be printed
 * @b: this is the funcliton
 * Return: (a + b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this prints the name of a function
 * @a: the name of waht shold be printed
 * @b: this is the funcliton
 * Return: (a + b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this prints the name of a function
 * @a: the name of waht shold be printed
 * @b: this is the funcliton
 * Return: (a + b)
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - this prints the name of a function
 * @a: the name of waht shold be printed
 * @b: this is the funcliton
 * Return: (a + b)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
