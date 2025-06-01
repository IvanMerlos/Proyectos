******************************************************************************
Realizar un programa que imprima los n´ umeros desde el 5 hasta el 0 y luego
 vuelva hasta el 5 como en el siguiente ejemplo (se debe utilizar al menos una
 estructura for.
  Modificar el programa anterior para que imprima laprogresi´onden´ umeros
 partiendodeunn´ umeronpositivoingresadoporelusuario
*******************************************************************************/
#include <stdio.h>
int n;
int main(){
    printf("Buenas\n");
    printf("Ingrese un numero: ");
    scanf("%d",&n);
 
for(int i=n;i>=0;i--){
 printf("%d\n",i);
}
for(int i=1;i<=n;i++){
 printf("%d\n",i);
}
    return 0;
}
