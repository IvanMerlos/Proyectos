//Arreglos 
#include <stdio.h>
 #define N 3
 int main(void)
 {
 int i;
 int a[N];
 
 for(i=0;i<N;i++){
  printf("Ingrese[%d]: ",i);
  scanf("%d",&a[i]);
  printf("a[%d]:%d \n",i,a[i]);
 }
 
 return 0;
 }
 
