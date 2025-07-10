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
//////////////////////////////////////////////////////////////////////////////otra forma mas extensa de hacerlo
#include <stdio.h>
int num1;
int max=0;
int main(){
 
for(int i=0;i<=10;i++){
 printf("\nIngrese un numero: ");
 scanf("%d",&num1);
 
 if(num1>max){
  max=num1;
 }
 else{
  
 max=max; 
 }

}
printf("el mayor es %d",max);
    return 0;
}
