#include <stdio.h>
int filas,columnas;
int main(){
       printf("Ingrese c/de Columnas: ");
      scanf("%d",&columnas);
      printf("Ingrese c/de Filas: ");
      scanf("%d",&filas);
      
      for(int i=1;i<=filas;i++){
        for(int j=1;j<=columnas;j++){
        printf(" %d %d ",i,j);
        }
        printf("\n");
       }
      
 return 0;
}
