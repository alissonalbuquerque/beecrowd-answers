
#include <stdio.h>

double soma(double vetor[12][12], int linha, int len) {

    double resultado = 0;

    for(int i = 0; i < len; i++) {
        resultado += vetor[linha][i];
    }

    return resultado;
}

double media(double vetor[12][12], int linha, int len) {

    double resultado = 0;

    for(int i = 0; i < len; i++) {
        resultado += vetor[linha][i];
    }

    resultado = resultado / (double) len;

    return resultado;
}

int main() {

    int linha, len = 12;
    char operacao, lixo;
    double M[len][len];

    scanf("%d %c", &linha, &operacao);
    scanf("%c", &lixo);

    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    double resultado = (operacao == 'S')? soma(M, linha, len) : media(M, linha, len);

    printf("%.1f\n", resultado);

    return 0;
}
