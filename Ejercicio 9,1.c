#include <stdio.h>

struct inventario{
	char nombre[30];
	int numero_parte,stock;
	float precio;
};
struct arr{
	char direccion[20];
	char ciudad [25];
	char codpost[6];
	
};
int main (void){
	
	struct inventario a;
	struct arr b;
	
	printf("\n*******************Primer estructura*******************\n");
	printf("Ingrese Nombre de inventario: ");scanf("%s",a.nombre);
	printf("Ingrese su codigo(entero): ");scanf("%d",&a.numero_parte);
	printf("Numero de stock: ");scanf("%d",&a.stock);
	printf("Ingrese el precio: ");scanf("%f",&a.precio);
	
	printf("\n*******************Siguiente estructura*******************\n");
	
	printf("Direccion casa/edificio(sin numero): ");
	scanf("%s",b.direccion);
	
	printf("Ciudad: ");
	scanf("%s",b.ciudad);
	
	printf("Codigo postal: ");
	scanf("%s", b.codpost);
	
	printf("\nNombre inventario:%s\n",a.nombre);
	printf("Codigo:%d\n",a.numero_parte);
	printf("N.Stock:%d\n",a.stock);
	printf("Precio:%.2f\n",a.precio);
	
	printf("Direccion:%s\n",b.direccion);
	printf("Ciudad:%s\n",b.ciudad);
	printf("Codigo postal:%s\n",b.codpost);
	
	return 0;
}
