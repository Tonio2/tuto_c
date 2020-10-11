#include <stdio.h>

int main()
{
	char *str;
	int index_of_last_s;
	int cpt;

	cpt = 0;
	str = "Je suis ton pere";

	while (str[cpt])
	{
		if (str[cpt] == 's')
		{
			index_of_last_s = cpt;
		}
		cpt++;
	}
	printf("%d\n", index_of_last_s);
}
