#include <stdio.h>

int produit(a, b)
{
	int ret;

	ret = a * b;
	return (ret);
}

int main()
{
	int prix_baguette = 1;
	int nb_baguette = 5;

	int total = produit(prix_baguette, nb_baguette);
	
	printf("%d\n", total);
}
