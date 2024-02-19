#include <stdio.h>
#include <string.h>

int main()
{

	char posicao[4];
	int total = 0;

	posicao[0] = 'N';
	posicao[1] = 'L';
	posicao[2] = 'S';
	posicao[3] = 'O';

	int a, i;

	printf("Digite a quantidade de comandos:");
	scanf("%i", &a);

	char valores[a];

	scanf("%s", valores);

	for (i = 0; i < a; i++)
	{
		if (valores[i] == 'D')
		{
			total++;
			if (total > 3)
			{
				total = 0;
			}
		}
		else if (valores[i] == 'E')
		{
			total--;
			if (total < 0)
			{
				total = 3;
			}
		}
	}

	printf("%c", posicao[total]);

	return 0;
}
