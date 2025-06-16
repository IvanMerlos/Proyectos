#include <stdio.h>

int ret_maximo(int a, int b)
{
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    return max;
}

int main(void)
{
    int num_1, num_2, num_3, num_4, maximo;
    printf("Ingrese cuatro números diferentes: ");
    scanf("%d %d %d %d", &num_1, &num_2, &num_3, &num_4);

    
    maximo = ret_maximo(num_1, num_2);       
    maximo = ret_maximo(maximo, num_3);      
    maximo = ret_maximo(maximo, num_4);  
    

    printf("El mayor número es: %d\n", maximo);

    return 0;
}
