#include <stdio.h>

int main() {
    int numero, suma = 0;

printf("Ingrese un número entero: ");
    scanf("%d", &numero);

if (numero < 1) {
        printf("El número debe ser positivo.\n");
} else {
     for (int i = 1; i <= numero; i++) {
        suma += i;
        }
}
