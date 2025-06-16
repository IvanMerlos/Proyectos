#include <stdio.h>
  void imprime_mayor(int x, int y){
    if(x>y){
     printf("El mayor es:%d",x);
      }
    else if(x<y){
    printf("El mayor es:%d",y);
    }
    else{
    printf("Son iguales");
    }
   }
 int main(void){
  
 int num1;
 int num2;
 
   printf("Ingrese numero : ");
  scanf("%d",&num1);
   printf("Ingrese numero: ");
  scanf("%d",&num2);
 
 imprime_mayor(num1,num2);
 
 return 0;
 }
