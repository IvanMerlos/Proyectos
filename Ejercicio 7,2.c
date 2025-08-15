//Arreglos 
#include <stdio.h>

 int main(void)
 {
  int i,tam,max=0;
  int a[]={0};
  
  printf("Ingrese Tamaño del arreglo: ");
  scanf("%d",&tam);
      
  for(i=0;i<tam;i++){
   printf("Ingrese el elemento [%d]: ",i);
   scanf("%d",&a[i]);
 
   if(a[i]>=max){
    max=a[i];
   }
       max=max;
       
  }
  printf("El mayor es %d\n",max);

return 0;
 }
