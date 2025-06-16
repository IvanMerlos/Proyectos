 #include <stdio.h>
 float ingreso_numero(void){
  
 float num;
 printf("Ingrese un numero flotante: ");
 scanf("%f",&num);
 return num;
 
 }
 int main(void){
  
 printf("Usted ingreso el numero %0.1f\n", ingreso_numero());
 return 0;
 }
