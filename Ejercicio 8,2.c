//Punteros-Ejercicio 8.2
#include <stdio.h>
#define N 4

void ingresar_y_verificar_elementos(int *a, int tam);
void convertir_a_par(int *a, int tam);
int copiar_negativos(int *arr, int *negativos, int tam);

int main(void) {
  
	int arreglo[N] = {0};
	int negativos[N] = {0};
	int cant_negativos = 0;
	// Ingreso de valores
	ingresar_y_verificar_elementos(arreglo, N);
	// Convierte impares a pares
	convertir_a_par(arreglo, N);
	// Copiar negativos a otro arreglo
	cant_negativos = copiar_negativos(arreglo, negativos, N);
	printf("Arreglo modificado (impares convertidos a pares):\n");
  
	for (int i = 0; i < N; i++) {
		printf("%d ", arreglo[i]);
	}
	printf("\nArreglo de negativos:\n");
  
	for (int i = 0; i < cant_negativos; i++) {
		printf("%d ", negativos[i]);
	}
	return 0;
}

void ingresar_y_verificar_elementos(int *a, int tam){
	int val;
	for(int i=0;i<tam;i++){
		printf("Ingrese un valor: ");
		scanf("%d",&val);
		while(val==0){
			printf("No debe valer cero\n");
			printf("Ingrese un valor: ");
			scanf("%d",&val);
		}
		a[i]=val;
	}
}

	void convertir_a_par(int *a, int tam){
		
		for(int i=0;i<tam;i++){
			if(a[i]%2!=0){
				a[i]++;		
			}
		}
	}

		int copiar_negativos(int *arr, int *negativos, int tam){
			int n=0;
			for(int i=0;i<tam;i++){
				if(arr[i]<0){
					negativos[n]=arr[i];
					n++;
				} 
				
			}
			return n;
		}
