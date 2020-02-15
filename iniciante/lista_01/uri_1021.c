
#include <stdio.h>

int main() {

    int num_notas[6] = {0, 0, 0, 0, 0, 0};
    int num_moedas[5] = {0, 0, 0, 0, 0};

    double notas[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    int len = sizeof(num_notas) / 4;

    double valor = 0;
    scanf("%lf", &valor);

    for(int i = 0; i < len; i++) {
        if(valor >= notas[i]) {
            num_notas[i] = (int) (valor / notas[i]);
            valor = valor - (notas[i] * num_notas[i]);
        }
    }

    valor = valor * 100;
    for(int j = 0; j < len-1; j++) {
        if(valor >= moedas[j]) {
            num_moedas[j] = (int) (valor) / (int) (moedas[j] * 100);
            valor = valor - ((moedas[j] * 100) * num_moedas[j]);
        }
    }
    

    printf("NOTAS:\n");
    for(int i = 0; i < len; i++) {
        printf("%d nota(s) de R$ %.2lf\n", num_notas[i], notas[i]);
    }

    printf("MOEDAS:\n");
    for(int j = 0; j < len-1; j++) {
        printf("%d moeda(s) de R$ %.2lf\n", num_moedas[j], moedas[j]);
    }

    printf("%.0lf moeda(s) de R$ %.2lf\n", valor, moedas[len-1]);

    return 0;
}
