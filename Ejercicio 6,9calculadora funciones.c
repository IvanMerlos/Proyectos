/*Implementar una funci´on para cada operaci´ on matem´ atica b´asica. Cada
 funci´ on debe recibir dos n´ umeros reales y devolver el resultado correspon
diente. La funci´on dividir debe verificar que el divisor no sea cero. Si lo es,
 retornar 0 e imprimir un mensaje de error desde la funci´on.*/
#include <stdio.h>

 int operacion,num1,num2;
 float sumar(float a, float b);
 float restar(float a, float b);
 float Producto(float a, float b);
 float divicion(float a, float b);

int main(){
    printf("Ingrese que operacion quiere\n");
     printf("0-Ninguna/EXIT\n");
    printf("1-suma\n");
    printf("2-Resta\n");
    printf("3-Producto\n");
    printf("4-divicion\n");
    printf("Ingrese que operacion quiere realizar: ");
    scanf("%d",&operacion);
    
  
  switch(operacion){
   case 1:
   printf("Ingrese Un numero: ");
    scanf("%d",&num1);
    printf("Ingrese Otro numero: ");
    scanf("%d",&num2);
    printf("La suma es:%.2f ",sumar(num1,num2));
   
   break;
  
  case 2:
  printf("Ingrese Un numero: ");
    scanf("%d",&num1);
    printf("Ingrese Otro numero: ");
    scanf("%d",&num2);
    printf("La resta es:%.2f ",restar(num1,num2));
   
   break;
  
  case 3:
  printf("Ingrese Un numero: ");
    scanf("%d",&num1);
    printf("Ingrese Otro numero: ");
    scanf("%d",&num2);
      printf("El producto es:%.2f ",Producto(num1,num2));
   
   break;
  
  case 4:
  printf("Ingrese Un numero: ");
    scanf("%d",&num1);
    printf("Ingrese Otro numero: ");
    scanf("%d",&num2);
    printf("El producto es:%.2f ",divicion(num1,num2));
   
   break;
  
  case 0:
   break;
 
  return 0;  
}
 }
float sumar(float a, float b){
 float suma;
 suma = a+b;
 return suma;
}
float restar(float a, float b){
 float resta;
 resta = a-b;
 return resta;
 
 
}
float Producto(float a, float b){
 float Producto;
 Producto = a*b;
 return Producto;
 
}
float divicion(float a, float b){
 
 float divicion;
 if(b==0){
  printf("ERROR: Divicion por cero\n");
  return 0;  
 }
 divicion = a/b;
 return divicion;
 
}
