
#include <stdio.h>
/*/* Ejercicio 2
void suma_y_producto( float *a,float *b,float *suma, float *producto){
	
	*suma = *a + *b;
	*producto = *a * *b;
	
}



//ejercicio 3




void ingresar_en_rango(int *p, int min, int max){
	
while(*p<min || *p>max){
	printf("Ingrese un valor: ");
	scanf("%d",p);
	
}
	
	
}
*///ejercicio 4

#define N 100
void cargar_arreglo(int *vec, int n){
	
	for(int i=0;i<n;i++){
		printf("Ingrese el %d valor: ",i);
		scanf("%d",*vec);
		
		
	}
}




int main() {
	
	int vec[N],n;
	printf("Cantidad elementos: ");
	scanf("%d",&n);
	
	cargar_arreglo(&vec,n);

	for(int i=0;i<n;i++){
		printf("I %d valor: ",vec[i]);
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*ejerciio 3
	
	int max,min,n,*p;
	
	printf("Ingrese un maximo del rango: ");
	scanf("%d",&max);
	printf("Ingrese un minimo del rango: ");
	scanf("%d",&min);
	printf("Ingrese un valor: ");
	scanf("%d",&n);
	p=&n;
	
	ingresar_en_rango(p, min,  max);
	
	
	printf("%d",*p);
	*/
	
	
	

	
	//ejercicio 2
	
	/* float a,b,suma, producto;
	 
	printf("Ingrese un valor: ");
		   scanf("%f",&a);
		   printf("Ingrese un valor: ");
		   scanf("%f",&b);
			
		   suma_y_producto(&a,&b,&suma,&producto);
		   
		   printf("%f",suma);
		   printf("%f",producto);
		   */
	return 0;
}
