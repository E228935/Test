#include <iostream>

int Add(int a, int b)
{
	return a + b;
}

int Del(int a, int b)
{
	return a - b;
}

int Div(int a, int b)
{
	if (0 == b) return;
	
	return a / b;
}

int Mul(int a, int b) 
{
	return a * b;
}

int QuYu(int a, int b)
{
	return a % b;
}