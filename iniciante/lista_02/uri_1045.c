
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NAO_FORMA_TRIANGULO "NAO FORMA TRIANGULO"
#define TRIANGULO_RETANGULO "TRIANGULO RETANGULO"
#define TRIANGULO_OBTUSANGULO "TRIANGULO OBTUSANGULO"
#define TRIANGULO_ACUTANGULO "TRIANGULO ACUTANGULO"
#define TRIANGULO_EQUILATERO "TRIANGULO EQUILATERO"
#define TRIANGULO_ISOSCELES "TRIANGULO ISOSCELES"

#define PRINT(P) (printf("%s\n", P))

int comparador(const void* p1, const void* p2) {

    if( *(double*)p1 == *(double*)p2 ) {
        return 0; // igual
    } else {
        if( *(double*)p1 < *(double*)p2 ) {
            return 1; // p1 vem depois de p2
        } else {
            return -1; // p1 vem antes de p2
        }
    }
    
}

int main() {

    double vetor[3];
    size_t size_type = sizeof(double);
    size_t len = sizeof(vetor) / size_type;

    scanf("%lf %lf %lf", &vetor[0], &vetor[1], &vetor[2]);
    qsort(vetor, len, size_type, comparador);

    double a = vetor[0], b = vetor[1], c = vetor[2];

    if(a >= b + c) {
        PRINT(NAO_FORMA_TRIANGULO);
        return 0;
    }

    if(pow(a, 2) == pow(b, 2) + pow(c, 2)) {
        PRINT(TRIANGULO_RETANGULO);
    }
    
    if(pow(a, 2) > pow(b, 2) + pow(c, 2)) {
        PRINT(TRIANGULO_OBTUSANGULO);
    }

    if(pow(a, 2) < pow(b, 2) + pow(c, 2)) {
        PRINT(TRIANGULO_ACUTANGULO);
    }

    if(a == b && a == c) {
        PRINT(TRIANGULO_EQUILATERO);
    }

    if( (a == b ^ b == c)) {
        PRINT(TRIANGULO_ISOSCELES);
    }

    return 0;
}
