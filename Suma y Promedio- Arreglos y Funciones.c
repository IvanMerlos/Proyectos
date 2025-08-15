#include <stdio.h>

#define MAX 100

// Función para leer los elementos del arreglo
void leerArreglo(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Función para calcular la suma
int sumaArreglo(int arr[], int n) {
    int suma = 0;
    for(int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

// Función para mostrar el arreglo
void mostrarArreglo(int arr[], int n) {
    printf("Elementos: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX], n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    leerArreglo(arr, n);
    mostrarArreglo(arr, n);

    int suma = sumaArreglo(arr, n);
    float promedio = (float)suma / n;

    printf("Suma: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
