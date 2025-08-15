//Arreglos 
#include <stdio.h>
 #define N 5
 int main(void)
 {
  int i;
  int a[N]={0};

 for(i=0;i<N;i++){
 printf("Ingrese el valor del arreglo a[%d]:",i);
 scanf("%d",&a[i]);
 
 if(a[i]<0){
  a[i]=a[i] *-1;
 }
 
}for(i=0;i<N;i++){
printf("a[%d]:%d\n",i,a[i]);
}
return 0;
 }
 
