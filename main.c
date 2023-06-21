#include <stdio.h>
#include "operaciones.h"

int main() {
    float num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    float suma, resta, multiplicacion, division;

    sumar(&num1, &num2, &suma);
    restar(&num1, &num2, &resta);
    multiplicar(&num1, &num2, &multiplicacion);
    dividir(&num1, &num2, &division);

    printf("Suma: %f\n", suma);
    printf("Resta: %f\n", resta);
    printf("Multiplicación: %f\n", multiplicacion);
    printf("División: %.2f\n", division);

    return 0;
}
