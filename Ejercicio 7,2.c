//arreglo
#include <stdio.h>
#define N 5
int i,max=0;
int a[N];
int main()
{
 
     for(i=0;i<N;i++){
      printf("Ingrese el elemento a[%d]: ",i);
      scanf("%d",&a[i]);
      if(a[i]>max){
      max=a[i];
      }
      max=max;
     }
     printf("El mayor Elemento del arreglo es %d",max);
     
    return 0;
}
