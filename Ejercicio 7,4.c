//Arreglos
#include <stdio.h>
#define N 5
int i;
int a[N];
int main()
{
 for(i=0;i<N;i++){
  printf("Ingrese el a[%d]: ",i);
  scanf("%d",&a[i]);
 while(a[i]<0 || a[i]>99){
  printf("Ingrese nuevamente el a[%d]: ",i);
  scanf("%d",&a[i]);
  }
 }
 for(i=0;i<N;i++){
  printf(" a[%d]:%d \n",i,a[i]);
  } 
 return 0;
}
