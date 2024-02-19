#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, i, b;

	printf("Digite o valor inicial:");
	scanf("%i", &a);

	// Usei ponteiro, porque usando int valores[a], o array só suporta o valor de a até 1000000, passou disso estoura a pilha.
	int *valores;
	valores = (int *)malloc(a * sizeof(int));

	// 1 representa verdadeiro, 0 representa falso
	for (i = 1; i <= a; i++) {
		valores[i] = 0;
	}

	for (i = 1; i <= a; i++) {
		for (b = i; b <= a; b += i) {
			if (valores[b] == 0) {
				valores[b] = 1;
			} else {
				valores[b] = 0;
			}
		}
	}

	for (i = 1; i <= a; i++) {
		if (valores[i] == 1) {
			printf("%d ", i);
		}
	}

	return 0;
}
