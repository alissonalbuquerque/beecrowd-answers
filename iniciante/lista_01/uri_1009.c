
#include <stdio.h>

int main() {

    char nome[100];
    double salario, vendas, total, porcentagem = 0.15;

    scanf("%s %lf %lf", &nome, &salario, &vendas);

    total = salario + (vendas * porcentagem);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
