//Imprime numero menor de los ingresados
#include <stdio.h>
int num,menor;
int main()
{
    
for(int i=1;i<=10;i++){
 printf("Ingrese el [%d] numero: ",i);
    scanf("%d",&num);
 if(num<=menor){
  menor = num;
   }
  }
    printf("El menor es %d \n",menor);
    return 0;
}
