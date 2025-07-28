//Ejercicio 6,12
#include <stdio.h>
int contarCifras(int n);
unsigned int x;
int main()
{
	printf("Ingrese un valor entero positivo: ");
	scanf("%u",&x);
	
	printf("tiene %d de cifras",contarCifras(x));
	return 0;
}
int contarCifras(int n){
	if(n==0){
		return 1;
	}
	int i;
	for(i=1;i<=n;i++){
		
		n = n/10;
		
		
	}
	return i;
}//no maneja numeros negativos
