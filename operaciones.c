#include <stdio.h>

void sumar(float *a, float *b, float *resultado) {
    *resultado = *a + *b;
}

void restar(float *a, float *b, float *resultado) {
    *resultado = *a - *b;
}

void multiplicar(float *a, float *b, float *resultado) {
    *resultado = *a * *b;
}

void dividir(float *a, float *b, float *resultado) {
    *resultado = *a / *b;
}
