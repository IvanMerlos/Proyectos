//Imprime numero pares
#include <stdio.h>
int num;
int main()
{
    printf("Ingrese un numero: ");
    scanf("%d",&num);
for(int i=0;i<=num;i++){
 if(i%2 == 0){
  printf("%d",i);
 }
 else{
   printf("\n");
 }
}
    return 0;
}
