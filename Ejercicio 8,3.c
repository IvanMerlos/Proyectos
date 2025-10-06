//Ejercicio 8,3
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
void inicializar_arreglo(int *arr, int tam);
void contar_positivos(int *arr, int tam, int *cant_positivos );
void contar_negativos(int *arr, int tam, int *cant_negativos );
void copiar_positivos(int *arr, int *positivos, int tam);
void copiar_negativos(int *arr, int *negativos, int tam);
void imprimir_arreglo(int *arr, int tam);

int main(void) {
	int arreglo[N] = {0};
	int positivos[N] = {0}, negativos[N] = {0};
	int cant_positivos = 0, cant_negativos = 0;
	srand(time(NULL));
	
	inicializar_arreglo(arreglo, N); //joya
	
	contar_positivos(arreglo, N, &cant_positivos);//joya
	
	printf("\nCantidad de numeros positivos: %d\n",cant_positivos);//joya
	
	contar_negativos(arreglo, N, &cant_negativos);
	printf("\nCantidad de numeros negativos: %d\n\n",cant_negativos);//joya
	
	copiar_positivos(arreglo, positivos, N);
	copiar_negativos(arreglo, negativos, N);
	
	printf("Arreglo original:\n");
	imprimir_arreglo(arreglo, N);
	printf("Arreglo de numeros positivos:\n\n");
	// Completar
	for(int j=0;j<cant_positivos;j++){
		
		printf("%d\n",positivos[j]);
	}
	printf("Arreglo de numeros negativos:\n\n");
	//completar
	for(int j=0;j<cant_negativos;j++){
		
		printf("%d\n",negativos[j]);
	}
	return 0;
}
void inicializar_arreglo(int *arr, int tam){
	int n1=-300,n2=500;
	for(int i=0; i<tam;i++){
		arr[i] = rand() % (n2 - n1 + 1) + n1;
	}
}
void contar_positivos(int *arr, int tam, int *cant_positivos ){	
	for(int i=0; i<tam;i++){
		if(arr[i]>=0){
	*cant_positivos = *cant_positivos + 1;
	}
   }
}
void contar_negativos(int *arr, int tam, int *cant_negativos ){
		for(int i=0; i<tam;i++){
			if(arr[i]<0){
				*cant_negativos +=1;
			}
		}
	}
void copiar_positivos(int *arr, int *positivos, int tam){			
	int n=0; 
	for(int i=0;i<tam;i++){
		 if(arr[i]>=0){
		 positivos[n] = arr[i];
		 n++;
		 }
	}
}
void copiar_negativos(int *arr, int *negativos, int tam){
		int n=0;
		for(int i=0;i<tam;i++){
		 if(arr[i]<0){	 
	       negativos[n] = arr[i];
		   n++;
		}
	}
}
void imprimir_arreglo(int *arr, int tam){
	for(int i=0;i<tam;i++){		
	printf("Orginal:arr[%d]:%d\n\n",i,arr[i]);
	}
}
