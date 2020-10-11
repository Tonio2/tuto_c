#include <stdio.h>

int majeur(int n)
{
	if (n > 18)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main()
{
	int age;
	char *str;

	age = 25;
	if (majeur(age))
	{
		str = "Je suis mineur";
	}
	else
	{
		str = "Je suis majeur";
	}
	printf("%s", str);
	return (0);
}
