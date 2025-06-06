//factorial de un numero
#include <stdio.h>
int numero;
 int resultado = 1;
int main()
{
     printf("Ingrese un numero entre 0 y 10: ");
     scanf("%d",&numero);
      if(numero>=0 && numero<=10){
      
       for(int i=1;i<=numero;i++){
      
       resultado = resultado*i; 
      
      printf("%d\n",resultado);
       }
     }
     else{
      while(numero<0 || numero>10){
          printf("Ingrese un numero entre 0 y 10: ");
          scanf("%d",&numero);
      }
       for(int i=1;i<=numero;i++){
      
       resultado = resultado*i; 
      
        printf("%d\n",resultado);
      }
     }
    return 0;
}
