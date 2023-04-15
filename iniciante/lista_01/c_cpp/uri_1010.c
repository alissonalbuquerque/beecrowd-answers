
#include <stdio.h>

int main() {

    int p1, p2, unidade1, unidade2;
    double valor1, valor2, pagar;

    scanf("%d %d %lf", &p1, &unidade1, &valor1);
    scanf("%d %d %lf", &p2, &unidade2, &valor2);
    
    pagar = valor1 * unidade1 + valor2 * unidade2;

    printf("VALOR A PAGAR: R$ %.2lf\n", pagar);

    return 0;
}
