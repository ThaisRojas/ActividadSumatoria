#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero < 1) {
        printf("El número debe ser positivo.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            suma += i;
        }
        printf("La suma de Gauss para %d es: %d\n", numero, suma);
    }

    return 0;
}