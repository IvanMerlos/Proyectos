 #include <stdio.h>

int fibonacci(int num);

int main(void){
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    printf("El número de Fibonacci en la posición %d es: %d\n", num, fibonacci(num));
    return 0;
}

int fibonacci(int num){
    int a = 0, b = 1, c;

    if (num == 0) return 0;
    if (num == 1) return 1;

    for (int i = 2; i <= num; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
