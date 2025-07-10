/******************************************************************************
 Escribir un algoritmo para obtener el promedio simple de un estudiante a
 partir de las tres notas parciales. Las notas ser´an introducidas una a una por
 el usuario.
*******************************************************************************/
#include <stdio.h>
float nota1,nota2,nota3,prom;//me parece mas facil usar for que 3variables
int main()
{
    printf("Introduzca las 3 notas: ");
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    
   printf("El prom es %.2f",prom = (nota1+nota2+nota3)/3);
    return 0;
}
