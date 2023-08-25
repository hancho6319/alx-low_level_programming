#include "stdio.h"


int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	if (b == 0)
	{
		printf("The divine would not be zero");
		return (-1);
	}
	return (a / b);
}

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("The divine would not be zero");
		return (-1);
	}
	return (a % b);
}
