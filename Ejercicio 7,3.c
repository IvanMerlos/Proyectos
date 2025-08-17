//arreglo
#include <stdio.h>
#define N 5
int i,suma=0;
int a[N],b[N];
int main()
{
 printf("Se pedira un total de 5 Elementos\n");
 for(i=0;i<N;i++){
  printf("Ingrese el a[%d]: ",i);
  scanf("%d",&a[i]);
 }
  for(i=0;i<N;i++){
   suma=suma + a[i];
   printf(" b[%d]:%d\n ",i,suma);
  }
    return 0;
}
