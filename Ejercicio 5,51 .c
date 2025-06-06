//Potencia de un numero
#include <stdio.h>
int numero,potencia;
 int resultado = 1;
int main()
{
     printf("Ingrese un numero: ");
     scanf("%d",&numero);
     printf("Ingrese la Potencia: ");
     scanf("%d",&potencia);
  
       for(int i=1;i<=potencia;i++){
         resultado = resultado*numero;
       }
       printf("la potencia de %d es: %d",numero,resultado);
    return 0;
}
