#include <stdio.h>

int main()
{
	int a;
	int b;
	int result;

	result = a + b;
	result = a * b;
	a = result;
	b = a;
	a = a + b;
}
