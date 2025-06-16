//dos maneras de hacer potencia con funciones
#include <stdio.h>
 #include <math.h>
 int potecia2(int base,int expo);
 int potecia1(int base,int expo);
 int base, expo;
 int main(void){
  
 printf("Ingrese base y explonente: "); 
 scanf("%d %d", &base, &expo);
 printf("El numero %d elevado a la %d es: %d\n", base, expo,potecia1(base,expo));
 printf("El numero %d elevado a la %d es: %d\n", base, expo,potecia2(base,expo));
 return 0;
 }
 int potecia1(int base,int expo){
  
  int resultado1 = pow(base,expo);
  return resultado1;
 }
 
 int potecia2(int base,int expo){
 int resultado2 = 1;
 
   for(int i = 1;i <=expo;i++){
    
    resultado2 = resultado2*base;
    
     
   }
 return resultado2;
 }
