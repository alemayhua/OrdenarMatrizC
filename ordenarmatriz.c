#include <stdio.h>
#include <stdlib.h>


int main() {
	int filas, columnas, i, j, numeros[50][50], aux, b;

	printf("Ingresa cantidad de filas: ");
	scanf("%d", &filas);
	printf("Ingresa cantidad de columnas: ");
	scanf("%d", &columnas);

	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			printf("\nIngresa elemento numeros[%d][%d]: ", i, j);
			scanf("%d", &numeros[i][j]);
		}
	}

	do {
		b = 0;
		for(i = 0; i < filas; i++) {
			for(j = 0; j < columnas - 1; j++) {
				if(numeros[i][j] > numeros[i][j + 1]) {
					aux = numeros[i][j];
					numeros[i][j] = numeros[i][j + 1];
					numeros[i][j + 1] = aux;
					b = 1;
				}
			}

			if(i < filas - 1) {
				if(numeros[i][columnas - 1] > numeros[i + 1][0]) {
					aux = numeros[i][columnas - 1];
					numeros[i][columnas - 1] = numeros[i + 1][0];
					numeros[i + 1][0] = aux;
					b = 1;
				}
			}
		}
	} while(b == 1);


	system("cls");
	printf("\nLa matriz ordenada es:\n");

	for(i = 0; i < filas; i++) {
		for(j = 0; j < columnas; j++) {
			printf("[%d]", numeros[i][j]);
		}
		printf("\n");
	}

	return(0);
}