//Imprime numero mayor de los ingresados
#include <stdio.h>
int num,mayor;

int main()
{
    
for(int i=1;i<=10;i++){
 printf("Ingrese el [%d] numero: ",i);
    scanf("%d",&num);
 if(num>=mayor){
  mayor = num;
   }
  }
    printf("El mayor es %d \n",mayor);
    return 0;
}
