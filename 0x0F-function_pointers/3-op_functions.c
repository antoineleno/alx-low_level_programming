#include"3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Function to add two numbers
 * @a: First number
 * @b: second number
 * Return: the number
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to substrate two numbers
 * @a: First number
 * @b: Second number
 * Return: The sum
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - funcion to muliply two numbers
 * @a: First number
 * @b: Socond number
 * Return: The resul
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divide two numbers
 * @a: first number
 * @b: Second number
 * Return: The result
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function that find the modulo
 * @a: Fist number
 * @b: second number
 * Return: the result
*/
int op_mod(int a, int b)
{
	return (a % b);
}

