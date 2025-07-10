#include <stdio.h>


void multiplo(int a, int b){
    if(a % b == 0 || b % a == 0){
        printf("1\n");
    } else {
        printf("0\n");
    }
}

int main(){
    int num1, num2;
    printf("Ingrese 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    multiplo(num1, num2);

    return 0;
}
