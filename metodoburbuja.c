#include <stdio.h>

int main() {
	int orden = 0, numeros[50], i, b, aux;
	printf("Ingresa orden del vector: ");
	do {
		scanf("%d", &orden);
	} while(orden == 0);
	
	for(i = 0; i < orden; i++){
		printf("Ingresa numero[%d]: ", i);
		scanf("%d", &numeros[i]);
	}
	
	do{
		b = 0;
		for(i = 0; i < orden - 1; i++){
			if(numeros[i] > numeros[i + 1]){
				aux = numeros[i + 1];
				numeros[i + 1] = numeros[i];
				numeros[i] = aux;
				b = 1;
			}
		}
	}while(b == 1);
	
	printf("\nEl vector ordenado es:\n");
	
	for(i = 0; i < orden; i++){
		printf("\nValor de [%d]: %d", i, numeros[i]);
	}

	return(0);
}