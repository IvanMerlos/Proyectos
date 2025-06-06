#include <stdio.h>
int numero;
int main()
{
    printf("Ingrese un numero: ");
     scanf("%d",&numero);
     
     for(int i=0;i<=10;i++){
      int Resultado = i * numero;
      printf("%d*%d = %d \n",i,numero,Resultado);
     }
    return 0;
}
