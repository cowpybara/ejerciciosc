#include <stdio.h>
#include <math.h>

/*Conversion de grados fahrenheit a celsius*/

float celsius, fahrenheit;

int main(int argc, char const *argv[])
{
    /* code */
    printf("Grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;

    printf("%f\n Grados celsius: ", fahrenheit, celsius);
    return 0;
} 
