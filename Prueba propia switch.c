//Ivan Mateo Merlos
#include <stdio.h>
int x,y,num0,num1;
int main()
{
    printf("Ingrese un numero de 4 digitos: ");
    scanf("%d",&x);
    
    switch(x){
     case  2004:
     
     printf("Biemvenid@\n");
     printf("Ingrese un numero entre el 1 al 6: ");
    scanf("%d",&y);
    
     switch(y){
               case 1:
      printf("bien, comparacion de 2 numeros enteros positivos\n");
      
      printf("Ingrese un valor: ");
      scanf("%d",&num0);
      
      printf("Ingrese otro valor: ");
       scanf("%d",&num1);
     
      if(num0>num1){
       printf("El mayor es: %d",num0);
       }
       if(num0<num1){
        printf("El mayor es: %d",num1);
       }
       else{
        printf("Son iguales: %d==%d",num0,num1);
       }       
     
     break;
      
      }
     break;
      case 3490:
     printf("Ingreso el 3");
     break;
     default:
     printf("Fuera de rango\n");
     
    }
    return 0;
}
