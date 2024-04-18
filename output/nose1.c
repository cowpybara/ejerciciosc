#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Solicitar al usuario que ingrese la temperatura en Fahrenheit
    printf("Ingresa la temperatura en Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convertir Fahrenheit a Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Mostrar el resultado
    printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", fahrenheit, celsius);
}