/******************************************************************************
Ingresar un numero e imprimir cuantos digitos tiene
*******************************************************************************/
#include <stdio.h>
 
 int num;
 int contarCifras(int n);
 
int main()
{
    printf("Ingrese un num entero: ");
    scanf("%d",&num);
    
      printf("%d ",contarCifras(num));
    
    
    return 0;
}
 int contarCifras(int n){
  int i=0;;
  if(n==0){
    return 1;
   
  }
  while(n!=0){
   n=n/10;
   i++;
   
  }
  return i;
 }
