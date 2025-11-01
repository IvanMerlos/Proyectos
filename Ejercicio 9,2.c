#include<stdio.h>
struct cliente {
	char apellido[20];
	char nombre[20];
	int edad;
	int dni;
	char calle[20];
	char ciudad[20];
};

int main(){
	struct cliente a;
	
	printf("Ingrese apellido: ");
	scanf("%s", a.apellido);
	printf("Ingrese su nombre: ");
	scanf("%s",a.nombre);
	printf("Edad: ");
	scanf("%d", &a.edad);
	printf("DNI: ");
	scanf("%d",&a.dni);
	printf("Ciudad: ");
    scanf("%s", a.ciudad);
	printf("Calle: ");
	scanf("%s", a.calle);
	
	printf("\n********************DATOS********************\n");
	
	printf("%s\n%s\n%d\n%d\n%s\n%s\n",a.apellido,a.nombre,a.edad,a.dni,a.ciudad,a.calle);
	return 0;
}
